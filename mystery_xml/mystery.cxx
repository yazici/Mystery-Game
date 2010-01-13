// Copyright (C) 2005-2008 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "mystery.hxx"

// PlotType
// 

const PlotType::desisions_type& PlotType::
desisions () const
{
  return this->desisions_.get ();
}

PlotType::desisions_type& PlotType::
desisions ()
{
  return this->desisions_.get ();
}

void PlotType::
desisions (const desisions_type& x)
{
  this->desisions_.set (x);
}

void PlotType::
desisions (::std::auto_ptr< desisions_type > x)
{
  this->desisions_.set (x);
}

const PlotType::name_optional& PlotType::
name () const
{
  return this->name_;
}

PlotType::name_optional& PlotType::
name ()
{
  return this->name_;
}

void PlotType::
name (const name_type& x)
{
  this->name_.set (x);
}

void PlotType::
name (const name_optional& x)
{
  this->name_ = x;
}

void PlotType::
name (::std::auto_ptr< name_type > x)
{
  this->name_.set (x);
}


// DesisionsType
// 

const DesisionsType::desision_sequence& DesisionsType::
desision () const
{
  return this->desision_;
}

DesisionsType::desision_sequence& DesisionsType::
desision ()
{
  return this->desision_;
}

void DesisionsType::
desision (const desision_sequence& s)
{
  this->desision_ = s;
}


// DesisionType
// 

const DesisionType::english_type& DesisionType::
english () const
{
  return this->english_.get ();
}

DesisionType::english_type& DesisionType::
english ()
{
  return this->english_.get ();
}

void DesisionType::
english (const english_type& x)
{
  this->english_.set (x);
}

void DesisionType::
english (::std::auto_ptr< english_type > x)
{
  this->english_.set (x);
}

const DesisionType::options_type& DesisionType::
options () const
{
  return this->options_.get ();
}

DesisionType::options_type& DesisionType::
options ()
{
  return this->options_.get ();
}

void DesisionType::
options (const options_type& x)
{
  this->options_.set (x);
}

void DesisionType::
options (::std::auto_ptr< options_type > x)
{
  this->options_.set (x);
}

const DesisionType::name_type& DesisionType::
name () const
{
  return this->name_.get ();
}

DesisionType::name_type& DesisionType::
name ()
{
  return this->name_.get ();
}

void DesisionType::
name (const name_type& x)
{
  this->name_.set (x);
}

void DesisionType::
name (::std::auto_ptr< name_type > x)
{
  this->name_.set (x);
}


// OptionsType
// 

const OptionsType::option_sequence& OptionsType::
option () const
{
  return this->option_;
}

OptionsType::option_sequence& OptionsType::
option ()
{
  return this->option_;
}

void OptionsType::
option (const option_sequence& s)
{
  this->option_ = s;
}


// OptionType
// 

const OptionType::english_type& OptionType::
english () const
{
  return this->english_.get ();
}

OptionType::english_type& OptionType::
english ()
{
  return this->english_.get ();
}

void OptionType::
english (const english_type& x)
{
  this->english_.set (x);
}

void OptionType::
english (::std::auto_ptr< english_type > x)
{
  this->english_.set (x);
}

const OptionType::weight_type& OptionType::
weight () const
{
  return this->weight_.get ();
}

OptionType::weight_type& OptionType::
weight ()
{
  return this->weight_.get ();
}

void OptionType::
weight (const weight_type& x)
{
  this->weight_.set (x);
}

void OptionType::
weight (::std::auto_ptr< weight_type > x)
{
  this->weight_.set (x);
}

const OptionType::desisions_optional& OptionType::
desisions () const
{
  return this->desisions_;
}

OptionType::desisions_optional& OptionType::
desisions ()
{
  return this->desisions_;
}

void OptionType::
desisions (const desisions_type& x)
{
  this->desisions_.set (x);
}

void OptionType::
desisions (const desisions_optional& x)
{
  this->desisions_ = x;
}

void OptionType::
desisions (::std::auto_ptr< desisions_type > x)
{
  this->desisions_.set (x);
}

const OptionType::name_type& OptionType::
name () const
{
  return this->name_.get ();
}

OptionType::name_type& OptionType::
name ()
{
  return this->name_.get ();
}

void OptionType::
name (const name_type& x)
{
  this->name_.set (x);
}

void OptionType::
name (::std::auto_ptr< name_type > x)
{
  this->name_.set (x);
}

const OptionType::id_type& OptionType::
id () const
{
  return this->id_.get ();
}

OptionType::id_type& OptionType::
id ()
{
  return this->id_.get ();
}

void OptionType::
id (const id_type& x)
{
  this->id_.set (x);
}


// WeightType
// 

const WeightType::option_id_type& WeightType::
option_id () const
{
  return this->option_id_.get ();
}

WeightType::option_id_type& WeightType::
option_id ()
{
  return this->option_id_.get ();
}

void WeightType::
option_id (const option_id_type& x)
{
  this->option_id_.set (x);
}

const WeightType::value_optional& WeightType::
value () const
{
  return this->value_;
}

WeightType::value_optional& WeightType::
value ()
{
  return this->value_;
}

void WeightType::
value (const value_type& x)
{
  this->value_.set (x);
}

void WeightType::
value (const value_optional& x)
{
  this->value_ = x;
}


#include <xsd/cxx/xml/dom/parsing-source.hxx>

// PlotType
//

PlotType::
PlotType (const desisions_type& desisions)
: ::xml_schema::type (),
  desisions_ (desisions, ::xml_schema::flags (), this),
  name_ (::xml_schema::flags (), this)
{
}

PlotType::
PlotType (::std::auto_ptr< desisions_type >& desisions)
: ::xml_schema::type (),
  desisions_ (desisions, ::xml_schema::flags (), this),
  name_ (::xml_schema::flags (), this)
{
}

PlotType::
PlotType (const PlotType& x,
          ::xml_schema::flags f,
          ::xml_schema::container* c)
: ::xml_schema::type (x, f, c),
  desisions_ (x.desisions_, f, this),
  name_ (x.name_, f, this)
{
}

PlotType::
PlotType (const ::xercesc::DOMElement& e,
          ::xml_schema::flags f,
          ::xml_schema::container* c)
: ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
  desisions_ (f, this),
  name_ (f, this)
{
  if ((f & ::xml_schema::flags::base) == 0)
  {
    ::xsd::cxx::xml::dom::parser< char > p (e, true, true);
    this->parse (p, f);
  }
}

void PlotType::
parse (::xsd::cxx::xml::dom::parser< char >& p,
       ::xml_schema::flags f)
{
  for (; p.more_elements (); p.next_element ())
  {
    const ::xercesc::DOMElement& i (p.cur_element ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    // desisions
    //
    if (n.name () == "desisions" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< desisions_type > r (
        desisions_traits::create (i, f, this));

      if (!desisions_.present ())
      {
        this->desisions_.set (r);
        continue;
      }
    }

    break;
  }

  if (!desisions_.present ())
  {
    throw ::xsd::cxx::tree::expected_element< char > (
      "desisions",
      "");
  }

  while (p.more_attributes ())
  {
    const ::xercesc::DOMAttr& i (p.next_attribute ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    if (n.name () == "name" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< name_type > r (
        name_traits::create (i, f, this));

      this->name_.set (r);
      continue;
    }
  }
}

PlotType* PlotType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class PlotType (*this, f, c);
}

PlotType::
~PlotType ()
{
}

// DesisionsType
//

DesisionsType::
DesisionsType ()
: ::xml_schema::type (),
  desision_ (::xml_schema::flags (), this)
{
}

DesisionsType::
DesisionsType (const DesisionsType& x,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::type (x, f, c),
  desision_ (x.desision_, f, this)
{
}

DesisionsType::
DesisionsType (const ::xercesc::DOMElement& e,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
: ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
  desision_ (f, this)
{
  if ((f & ::xml_schema::flags::base) == 0)
  {
    ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
    this->parse (p, f);
  }
}

void DesisionsType::
parse (::xsd::cxx::xml::dom::parser< char >& p,
       ::xml_schema::flags f)
{
  for (; p.more_elements (); p.next_element ())
  {
    const ::xercesc::DOMElement& i (p.cur_element ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    // desision
    //
    if (n.name () == "desision" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< desision_type > r (
        desision_traits::create (i, f, this));

      this->desision_.push_back (r);
      continue;
    }

    break;
  }
}

DesisionsType* DesisionsType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class DesisionsType (*this, f, c);
}

DesisionsType::
~DesisionsType ()
{
}

// DesisionType
//

DesisionType::
DesisionType (const english_type& english,
              const options_type& options,
              const name_type& name)
: ::xml_schema::type (),
  english_ (english, ::xml_schema::flags (), this),
  options_ (options, ::xml_schema::flags (), this),
  name_ (name, ::xml_schema::flags (), this)
{
}

DesisionType::
DesisionType (const english_type& english,
              ::std::auto_ptr< options_type >& options,
              const name_type& name)
: ::xml_schema::type (),
  english_ (english, ::xml_schema::flags (), this),
  options_ (options, ::xml_schema::flags (), this),
  name_ (name, ::xml_schema::flags (), this)
{
}

DesisionType::
DesisionType (const DesisionType& x,
              ::xml_schema::flags f,
              ::xml_schema::container* c)
: ::xml_schema::type (x, f, c),
  english_ (x.english_, f, this),
  options_ (x.options_, f, this),
  name_ (x.name_, f, this)
{
}

DesisionType::
DesisionType (const ::xercesc::DOMElement& e,
              ::xml_schema::flags f,
              ::xml_schema::container* c)
: ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
  english_ (f, this),
  options_ (f, this),
  name_ (f, this)
{
  if ((f & ::xml_schema::flags::base) == 0)
  {
    ::xsd::cxx::xml::dom::parser< char > p (e, true, true);
    this->parse (p, f);
  }
}

void DesisionType::
parse (::xsd::cxx::xml::dom::parser< char >& p,
       ::xml_schema::flags f)
{
  for (; p.more_elements (); p.next_element ())
  {
    const ::xercesc::DOMElement& i (p.cur_element ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    // english
    //
    if (n.name () == "english" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< english_type > r (
        english_traits::create (i, f, this));

      if (!english_.present ())
      {
        this->english_.set (r);
        continue;
      }
    }

    // options
    //
    if (n.name () == "options" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< options_type > r (
        options_traits::create (i, f, this));

      if (!options_.present ())
      {
        this->options_.set (r);
        continue;
      }
    }

    break;
  }

  if (!english_.present ())
  {
    throw ::xsd::cxx::tree::expected_element< char > (
      "english",
      "");
  }

  if (!options_.present ())
  {
    throw ::xsd::cxx::tree::expected_element< char > (
      "options",
      "");
  }

  while (p.more_attributes ())
  {
    const ::xercesc::DOMAttr& i (p.next_attribute ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    if (n.name () == "name" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< name_type > r (
        name_traits::create (i, f, this));

      this->name_.set (r);
      continue;
    }
  }

  if (!name_.present ())
  {
    throw ::xsd::cxx::tree::expected_attribute< char > (
      "name",
      "");
  }
}

DesisionType* DesisionType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class DesisionType (*this, f, c);
}

DesisionType::
~DesisionType ()
{
}

// OptionsType
//

OptionsType::
OptionsType ()
: ::xml_schema::type (),
  option_ (::xml_schema::flags (), this)
{
}

OptionsType::
OptionsType (const OptionsType& x,
             ::xml_schema::flags f,
             ::xml_schema::container* c)
: ::xml_schema::type (x, f, c),
  option_ (x.option_, f, this)
{
}

OptionsType::
OptionsType (const ::xercesc::DOMElement& e,
             ::xml_schema::flags f,
             ::xml_schema::container* c)
: ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
  option_ (f, this)
{
  if ((f & ::xml_schema::flags::base) == 0)
  {
    ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
    this->parse (p, f);
  }
}

void OptionsType::
parse (::xsd::cxx::xml::dom::parser< char >& p,
       ::xml_schema::flags f)
{
  for (; p.more_elements (); p.next_element ())
  {
    const ::xercesc::DOMElement& i (p.cur_element ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    // option
    //
    if (n.name () == "option" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< option_type > r (
        option_traits::create (i, f, this));

      this->option_.push_back (r);
      continue;
    }

    break;
  }
}

OptionsType* OptionsType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class OptionsType (*this, f, c);
}

OptionsType::
~OptionsType ()
{
}

// OptionType
//

OptionType::
OptionType (const english_type& english,
            const weight_type& weight,
            const name_type& name,
            const id_type& id)
: ::xml_schema::type (),
  english_ (english, ::xml_schema::flags (), this),
  weight_ (weight, ::xml_schema::flags (), this),
  desisions_ (::xml_schema::flags (), this),
  name_ (name, ::xml_schema::flags (), this),
  id_ (id, ::xml_schema::flags (), this)
{
}

OptionType::
OptionType (const english_type& english,
            ::std::auto_ptr< weight_type >& weight,
            const name_type& name,
            const id_type& id)
: ::xml_schema::type (),
  english_ (english, ::xml_schema::flags (), this),
  weight_ (weight, ::xml_schema::flags (), this),
  desisions_ (::xml_schema::flags (), this),
  name_ (name, ::xml_schema::flags (), this),
  id_ (id, ::xml_schema::flags (), this)
{
}

OptionType::
OptionType (const OptionType& x,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
: ::xml_schema::type (x, f, c),
  english_ (x.english_, f, this),
  weight_ (x.weight_, f, this),
  desisions_ (x.desisions_, f, this),
  name_ (x.name_, f, this),
  id_ (x.id_, f, this)
{
}

OptionType::
OptionType (const ::xercesc::DOMElement& e,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
: ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
  english_ (f, this),
  weight_ (f, this),
  desisions_ (f, this),
  name_ (f, this),
  id_ (f, this)
{
  if ((f & ::xml_schema::flags::base) == 0)
  {
    ::xsd::cxx::xml::dom::parser< char > p (e, true, true);
    this->parse (p, f);
  }
}

void OptionType::
parse (::xsd::cxx::xml::dom::parser< char >& p,
       ::xml_schema::flags f)
{
  for (; p.more_elements (); p.next_element ())
  {
    const ::xercesc::DOMElement& i (p.cur_element ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    // english
    //
    if (n.name () == "english" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< english_type > r (
        english_traits::create (i, f, this));

      if (!english_.present ())
      {
        this->english_.set (r);
        continue;
      }
    }

    // weight
    //
    if (n.name () == "weight" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< weight_type > r (
        weight_traits::create (i, f, this));

      if (!weight_.present ())
      {
        this->weight_.set (r);
        continue;
      }
    }

    // desisions
    //
    if (n.name () == "desisions" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< desisions_type > r (
        desisions_traits::create (i, f, this));

      if (!this->desisions_)
      {
        this->desisions_.set (r);
        continue;
      }
    }

    break;
  }

  if (!english_.present ())
  {
    throw ::xsd::cxx::tree::expected_element< char > (
      "english",
      "");
  }

  if (!weight_.present ())
  {
    throw ::xsd::cxx::tree::expected_element< char > (
      "weight",
      "");
  }

  while (p.more_attributes ())
  {
    const ::xercesc::DOMAttr& i (p.next_attribute ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    if (n.name () == "name" && n.namespace_ ().empty ())
    {
      ::std::auto_ptr< name_type > r (
        name_traits::create (i, f, this));

      this->name_.set (r);
      continue;
    }

    if (n.name () == "id" && n.namespace_ ().empty ())
    {
      this->id_.set (id_traits::create (i, f, this));
      continue;
    }
  }

  if (!name_.present ())
  {
    throw ::xsd::cxx::tree::expected_attribute< char > (
      "name",
      "");
  }

  if (!id_.present ())
  {
    throw ::xsd::cxx::tree::expected_attribute< char > (
      "id",
      "");
  }
}

OptionType* OptionType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class OptionType (*this, f, c);
}

OptionType::
~OptionType ()
{
}

// WeightType
//

WeightType::
WeightType (const option_id_type& option_id)
: ::xml_schema::type (),
  option_id_ (option_id, ::xml_schema::flags (), this),
  value_ (::xml_schema::flags (), this)
{
}

WeightType::
WeightType (const WeightType& x,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
: ::xml_schema::type (x, f, c),
  option_id_ (x.option_id_, f, this),
  value_ (x.value_, f, this)
{
}

WeightType::
WeightType (const ::xercesc::DOMElement& e,
            ::xml_schema::flags f,
            ::xml_schema::container* c)
: ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
  option_id_ (f, this),
  value_ (f, this)
{
  if ((f & ::xml_schema::flags::base) == 0)
  {
    ::xsd::cxx::xml::dom::parser< char > p (e, false, true);
    this->parse (p, f);
  }
}

void WeightType::
parse (::xsd::cxx::xml::dom::parser< char >& p,
       ::xml_schema::flags f)
{
  while (p.more_attributes ())
  {
    const ::xercesc::DOMAttr& i (p.next_attribute ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (i));

    if (n.name () == "option_id" && n.namespace_ ().empty ())
    {
      this->option_id_.set (option_id_traits::create (i, f, this));
      continue;
    }

    if (n.name () == "value" && n.namespace_ ().empty ())
    {
      this->value_.set (value_traits::create (i, f, this));
      continue;
    }
  }

  if (!option_id_.present ())
  {
    throw ::xsd::cxx::tree::expected_attribute< char > (
      "option_id",
      "");
  }
}

WeightType* WeightType::
_clone (::xml_schema::flags f,
        ::xml_schema::container* c) const
{
  return new class WeightType (*this, f, c);
}

WeightType::
~WeightType ()
{
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

::std::auto_ptr< ::PlotType >
plot (const ::std::string& u,
      ::xml_schema::flags f,
      const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::tree::error_handler< char > h;

  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (u, h, p, f));

  h.throw_if_failed< ::xsd::cxx::tree::parsing< char > > ();

  ::std::auto_ptr< ::PlotType > r (
    ::plot (
      d, f | ::xml_schema::flags::own_dom, p));

  return r;
}

::std::auto_ptr< ::PlotType >
plot (const ::std::string& u,
      ::xml_schema::error_handler& h,
      ::xml_schema::flags f,
      const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (u, h, p, f));

  if (!d.get ())
    throw ::xsd::cxx::tree::parsing< char > ();

  ::std::auto_ptr< ::PlotType > r (
    ::plot (
      d, f | ::xml_schema::flags::own_dom, p));

  return r;
}

::std::auto_ptr< ::PlotType >
plot (const ::std::string& u,
      ::xercesc::DOMErrorHandler& h,
      ::xml_schema::flags f,
      const ::xml_schema::properties& p)
{
  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (u, h, p, f));

  if (!d.get ())
    throw ::xsd::cxx::tree::parsing< char > ();

  ::std::auto_ptr< ::PlotType > r (
    ::plot (
      d, f | ::xml_schema::flags::own_dom, p));

  return r;
}

::std::auto_ptr< ::PlotType >
plot (::std::istream& is,
      ::xml_schema::flags f,
      const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::xml::sax::std_input_source isrc (is);
  return ::plot (isrc, f, p);
}

::std::auto_ptr< ::PlotType >
plot (::std::istream& is,
      ::xml_schema::error_handler& h,
      ::xml_schema::flags f,
      const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::xml::sax::std_input_source isrc (is);
  return ::plot (isrc, h, f, p);
}

::std::auto_ptr< ::PlotType >
plot (::std::istream& is,
      ::xercesc::DOMErrorHandler& h,
      ::xml_schema::flags f,
      const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::sax::std_input_source isrc (is);
  return ::plot (isrc, h, f, p);
}

::std::auto_ptr< ::PlotType >
plot (::std::istream& is,
      const ::std::string& sid,
      ::xml_schema::flags f,
      const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
  return ::plot (isrc, f, p);
}

::std::auto_ptr< ::PlotType >
plot (::std::istream& is,
      const ::std::string& sid,
      ::xml_schema::error_handler& h,
      ::xml_schema::flags f,
      const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::auto_initializer i (
    (f & ::xml_schema::flags::dont_initialize) == 0,
    (f & ::xml_schema::flags::keep_dom) == 0);

  ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
  return ::plot (isrc, h, f, p);
}

::std::auto_ptr< ::PlotType >
plot (::std::istream& is,
      const ::std::string& sid,
      ::xercesc::DOMErrorHandler& h,
      ::xml_schema::flags f,
      const ::xml_schema::properties& p)
{
  ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
  return ::plot (isrc, h, f, p);
}

::std::auto_ptr< ::PlotType >
plot (::xercesc::InputSource& i,
      ::xml_schema::flags f,
      const ::xml_schema::properties& p)
{
  ::xsd::cxx::tree::error_handler< char > h;

  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (i, h, p, f));

  h.throw_if_failed< ::xsd::cxx::tree::parsing< char > > ();

  ::std::auto_ptr< ::PlotType > r (
    ::plot (
      d, f | ::xml_schema::flags::own_dom, p));

  return r;
}

::std::auto_ptr< ::PlotType >
plot (::xercesc::InputSource& i,
      ::xml_schema::error_handler& h,
      ::xml_schema::flags f,
      const ::xml_schema::properties& p)
{
  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (i, h, p, f));

  if (!d.get ())
    throw ::xsd::cxx::tree::parsing< char > ();

  ::std::auto_ptr< ::PlotType > r (
    ::plot (
      d, f | ::xml_schema::flags::own_dom, p));

  return r;
}

::std::auto_ptr< ::PlotType >
plot (::xercesc::InputSource& i,
      ::xercesc::DOMErrorHandler& h,
      ::xml_schema::flags f,
      const ::xml_schema::properties& p)
{
  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
    ::xsd::cxx::xml::dom::parse< char > (i, h, p, f));

  if (!d.get ())
    throw ::xsd::cxx::tree::parsing< char > ();

  ::std::auto_ptr< ::PlotType > r (
    ::plot (
      d, f | ::xml_schema::flags::own_dom, p));

  return r;
}

::std::auto_ptr< ::PlotType >
plot (const ::xercesc::DOMDocument& d,
      ::xml_schema::flags f,
      const ::xml_schema::properties& p)
{
  if (f & ::xml_schema::flags::keep_dom)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > c (
      static_cast< ::xercesc::DOMDocument* > (d.cloneNode (true)));

    ::std::auto_ptr< ::PlotType > r (
      ::plot (
        c, f | ::xml_schema::flags::own_dom, p));

    return r;
  }

  const ::xercesc::DOMElement& e (*d.getDocumentElement ());
  const ::xsd::cxx::xml::qualified_name< char > n (
    ::xsd::cxx::xml::dom::name< char > (e));

  if (n.name () == "plot" &&
      n.namespace_ () == "")
  {
    ::std::auto_ptr< ::PlotType > r (
      ::xsd::cxx::tree::traits< ::PlotType, char >::create (
        e, f, 0));
    return r;
  }

  throw ::xsd::cxx::tree::unexpected_element < char > (
    n.name (),
    n.namespace_ (),
    "plot",
    "");
}

::std::auto_ptr< ::PlotType >
plot (::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument >& d,
      ::xml_schema::flags f,
      const ::xml_schema::properties&)
{
  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > c (
    ((f & ::xml_schema::flags::keep_dom) &&
     !(f & ::xml_schema::flags::own_dom))
    ? static_cast< ::xercesc::DOMDocument* > (d->cloneNode (true))
    : 0);

  ::xercesc::DOMDocument& doc (c.get () ? *c : *d);
  const ::xercesc::DOMElement& e (*doc.getDocumentElement ());

  const ::xsd::cxx::xml::qualified_name< char > n (
    ::xsd::cxx::xml::dom::name< char > (e));

  if (f & ::xml_schema::flags::keep_dom)
    doc.setUserData (::xml_schema::dom::tree_node_key,
                     (c.get () ? &c : &d),
                     0);

  if (n.name () == "plot" &&
      n.namespace_ () == "")
  {
    ::std::auto_ptr< ::PlotType > r (
      ::xsd::cxx::tree::traits< ::PlotType, char >::create (
        e, f, 0));
    return r;
  }

  throw ::xsd::cxx::tree::unexpected_element < char > (
    n.name (),
    n.namespace_ (),
    "plot",
    "");
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

