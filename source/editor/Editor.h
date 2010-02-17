/**
 * @file Editor.h
 *
 *  Created on: 15 Feb 2010
 *      @author Gregory Doran <www.gregorydoran.co.uk>
 */

#ifndef EDITOR_H_
#define EDITOR_H_

#include <ClanLib/display.h>
#include <ClanLib/core.h>
#include "../ApplicationModule.h"

/**
 * The editor class is used to edit the plot Baysian Networks.
 */
class Editor : public ApplicationModule
{
  public:
    Editor(const CL_DisplayWindow &);
    virtual ~Editor();
  private:
    void draw(void);
    void update(void);
};

#endif /* EDITOR_H_ */