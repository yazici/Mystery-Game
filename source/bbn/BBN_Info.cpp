/*
 * BBN_Info.cpp
 *
 *  Created on: 22 May 2010
 *      Author: greg
 */

#include "BBN_Info.h"
#include "BBN_Plot.h"
#include "../misc/logging.h"
#include <vector>
#include "BBN_Decision.h"
#include "BBN_Option.h"
#include "BBN_Exception.h"

BBN_Info::BBN_Info(CL_GUIManager* manager, const CL_GUITopLevelDescription& desc, BBN_Plot* bbn_network) : CL_Window(manager, desc)
{
	DEBUG_MSG("BBN_Info::BBN_Info(CL_GUIManager*, const char*) - Called.")
	_bbn_network = bbn_network;
	_list = 0x0;
	_button_generate = 0x0;
	draw_controls();
}

BBN_Info::~BBN_Info()
{
	DEBUG_MSG("BBN_Info::~BBN_Info() - Called.")

	clear_controls();
}

/**
 * Clears all existing controls and draws new ones
 * for the active _bnn_network object.
 */
void BBN_Info::draw_controls()
{
	clear_controls();

	CL_Rect client_area = get_client_area();

	//Create the list of decisions.
	_list = new CL_ListView(this);
	_list->set_geometry(CL_Rect(client_area.left + 10, client_area.top + 10,
														  client_area.right - 10, client_area.bottom - 50));
	_list->set_display_mode(listview_mode_details);
	_list->func_selection_changed().set(this,&BBN_Info::on_selection_changed,_list);

	CL_ListViewItem doc_item = _list->get_document_item();

	//Setup headers.
	CL_ListViewHeader* lv_header = _list->get_header();
	lv_header->append(lv_header->create_column("name_id", "Decision Name")).set_width(_list->get_width()/2);
	lv_header->append(lv_header->create_column("value_id", "Value")).set_width(_list->get_width()/2);

	//Itterate through decisions and list values
	std::vector<BBN_Decision*>* decisions = _bbn_network->get_decisions();
	std::vector<BBN_Decision*>::iterator it;
	CL_ListViewItem items[decisions->size()];
	int i = 0;
	for(it = decisions->begin(); it != decisions->end(); ++it)
	{
		items[i] = _list->create_item();
		items[i].set_column_text("name_id", (*it)->get_name());
		if((*it)->has_generated_result())
		{
			//Result has been chosen.
			items[i].set_column_text("value_id", (*it)->get_result()->get_name());
		}
		else
		{
			//Result is undefined.
			items[i].set_column_text("value_id", BBN_INFO_LIST_UNDEF);
		}
		items[i].set_editable(false);

		doc_item.append_child(items[i]);
		i++;
	}

	//Create the action buttons.
	_button_generate = new CL_PushButton(this);
	_button_generate->set_geometry(CL_Rect(client_area.right - 80,  client_area.bottom - 40,
                                         client_area.right - 10, client_area.bottom - 10));
	_button_generate->set_text("Generate");
	_button_generate->func_clicked().set(this, &BBN_Info::generate_selected, _button_generate);
  _button_generate->set_enabled(false);

	decisions = 0x0;
	lv_header = 0x0;

}

/**
 * Enables or disables the buttons based on the currently selected item.
 *
 * @param selection
 * @param listview
 */
void BBN_Info::on_selection_changed(CL_ListViewSelection selection, CL_ListView *listview)
{
	if(!selection.get_first().is_null())
	{
		if(selection.get_first().get_item().get_column("value_id").get_text() == BBN_INFO_LIST_UNDEF)
		{
			_button_generate->set_enabled(true);
		}
		else
		{
			_button_generate->set_enabled(false);
		}
	}
}

/**
 * Clears controls loaded by this component.
 */
void BBN_Info::clear_controls()
{
	if(_list != 0x0)
		delete(_list);
	if(_button_generate != 0x0)
		delete(_button_generate);
}

/**
 * Determines if there is an item selected in the list and
 * if it refers to a decision in the bayes net which hasn't
 * been generated yet it then proceeds to generate it. Otherwise
 * does nothing.
 *
 * Preconditions:
 * - _list is not null
 * - _bbn_network is not null
 */
void BBN_Info::generate_selected(CL_PushButton* button)
{
	_button_generate->set_enabled(false);

	if(_bbn_network != 0x0 && _list != 0x0)
	{
		CL_ListViewItem selected = _list->get_selected_item();
		if(!selected.is_null())
		{
			//Attempt to generate
			BBN_Option* option = _bbn_network->query_result(selected.get_column("name_id").get_text());
			if(option != 0x0)
				selected.set_column_text("value_id",option->get_name());
		}
		else
		{
			//Do nothing as nothing is selected.
		}
	}
	else
	{
		throw(BBN_Exception("BBN_Info::generate_selected(CL_InputEvent, CL_PushButton*) - Failed pre-conditions."));
	}
}