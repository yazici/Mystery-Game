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

#ifndef MYSTERY_HXX
#define MYSTERY_HXX

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/config.hxx>

#if (XSD_INT_VERSION != 3020000L)
#error XSD runtime version mismatch
#endif

#include <xsd/cxx/pre.hxx>

#ifndef XSD_USE_CHAR
#define XSD_USE_CHAR
#endif

#ifndef XSD_CXX_TREE_USE_CHAR
#define XSD_CXX_TREE_USE_CHAR
#endif

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/types.hxx>

#include <xsd/cxx/xml/error-handler.hxx>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

#include <xsd/cxx/tree/parsing.hxx>
#include <xsd/cxx/tree/parsing/byte.hxx>
#include <xsd/cxx/tree/parsing/unsigned-byte.hxx>
#include <xsd/cxx/tree/parsing/short.hxx>
#include <xsd/cxx/tree/parsing/unsigned-short.hxx>
#include <xsd/cxx/tree/parsing/int.hxx>
#include <xsd/cxx/tree/parsing/unsigned-int.hxx>
#include <xsd/cxx/tree/parsing/long.hxx>
#include <xsd/cxx/tree/parsing/unsigned-long.hxx>
#include <xsd/cxx/tree/parsing/boolean.hxx>
#include <xsd/cxx/tree/parsing/float.hxx>
#include <xsd/cxx/tree/parsing/double.hxx>
#include <xsd/cxx/tree/parsing/decimal.hxx>

namespace xml_schema
{
  // anyType and anySimpleType.
  //
  typedef ::xsd::cxx::tree::type type;
  typedef ::xsd::cxx::tree::simple_type< type > simple_type;
  typedef ::xsd::cxx::tree::type container;

  // 8-bit
  //
  typedef signed char byte;
  typedef unsigned char unsigned_byte;

  // 16-bit
  //
  typedef short short_;
  typedef unsigned short unsigned_short;

  // 32-bit
  //
  typedef int int_;
  typedef unsigned int unsigned_int;

  // 64-bit
  //
  typedef long long long_;
  typedef unsigned long long unsigned_long;

  // Supposed to be arbitrary-length integral types.
  //
  typedef long long integer;
  typedef long long non_positive_integer;
  typedef unsigned long long non_negative_integer;
  typedef unsigned long long positive_integer;
  typedef long long negative_integer;

  // Boolean.
  //
  typedef bool boolean;

  // Floating-point types.
  //
  typedef float float_;
  typedef double double_;
  typedef double decimal;

  // String types.
  //
  typedef ::xsd::cxx::tree::string< char, simple_type > string;
  typedef ::xsd::cxx::tree::normalized_string< char, string > normalized_string;
  typedef ::xsd::cxx::tree::token< char, normalized_string > token;
  typedef ::xsd::cxx::tree::name< char, token > name;
  typedef ::xsd::cxx::tree::nmtoken< char, token > nmtoken;
  typedef ::xsd::cxx::tree::nmtokens< char, simple_type, nmtoken > nmtokens;
  typedef ::xsd::cxx::tree::ncname< char, name > ncname;
  typedef ::xsd::cxx::tree::language< char, token > language;

  // ID/IDREF.
  //
  typedef ::xsd::cxx::tree::id< char, ncname > id;
  typedef ::xsd::cxx::tree::idref< type, char, ncname > idref;
  typedef ::xsd::cxx::tree::idrefs< char, simple_type, idref > idrefs;

  // URI.
  //
  typedef ::xsd::cxx::tree::uri< char, simple_type > uri;

  // Qualified name.
  //
  typedef ::xsd::cxx::tree::qname< char, simple_type, uri, ncname > qname;

  // Binary.
  //
  typedef ::xsd::cxx::tree::buffer< char > buffer;
  typedef ::xsd::cxx::tree::base64_binary< char, simple_type > base64_binary;
  typedef ::xsd::cxx::tree::hex_binary< char, simple_type > hex_binary;

  // Date/time.
  //
  typedef ::xsd::cxx::tree::time_zone time_zone;
  typedef ::xsd::cxx::tree::date< char, simple_type > date;
  typedef ::xsd::cxx::tree::date_time< char, simple_type > date_time;
  typedef ::xsd::cxx::tree::duration< char, simple_type > duration;
  typedef ::xsd::cxx::tree::gday< char, simple_type > gday;
  typedef ::xsd::cxx::tree::gmonth< char, simple_type > gmonth;
  typedef ::xsd::cxx::tree::gmonth_day< char, simple_type > gmonth_day;
  typedef ::xsd::cxx::tree::gyear< char, simple_type > gyear;
  typedef ::xsd::cxx::tree::gyear_month< char, simple_type > gyear_month;
  typedef ::xsd::cxx::tree::time< char, simple_type > time;

  // Entity.
  //
  typedef ::xsd::cxx::tree::entity< char, ncname > entity;
  typedef ::xsd::cxx::tree::entities< char, simple_type, entity > entities;

  // Flags and properties.
  //
  typedef ::xsd::cxx::tree::flags flags;
  typedef ::xsd::cxx::tree::properties< char > properties;

  // Exceptions.
  //
  typedef ::xsd::cxx::tree::exception< char > exception;
  typedef ::xsd::cxx::tree::bounds< char > bounds;
  typedef ::xsd::cxx::tree::duplicate_id< char > duplicate_id;
  typedef ::xsd::cxx::tree::parsing< char > parsing;
  typedef ::xsd::cxx::tree::expected_element< char > expected_element;
  typedef ::xsd::cxx::tree::unexpected_element< char > unexpected_element;
  typedef ::xsd::cxx::tree::expected_attribute< char > expected_attribute;
  typedef ::xsd::cxx::tree::unexpected_enumerator< char > unexpected_enumerator;
  typedef ::xsd::cxx::tree::expected_text_content< char > expected_text_content;
  typedef ::xsd::cxx::tree::no_prefix_mapping< char > no_prefix_mapping;

  // Parsing/serialization diagnostics.
  //
  typedef ::xsd::cxx::tree::severity severity;
  typedef ::xsd::cxx::tree::error< char > error;
  typedef ::xsd::cxx::tree::diagnostics< char > diagnostics;

  // Error handler callback interface.
  //
  typedef ::xsd::cxx::xml::error_handler< char > error_handler;

  // DOM interaction.
  //
  namespace dom
  {
    // Automatic pointer for DOMDocument.
    //
    using ::xsd::cxx::xml::dom::auto_ptr;

#ifndef XSD_CXX_TREE_TREE_NODE_KEY_IN___XML_SCHEMA
#define XSD_CXX_TREE_TREE_NODE_KEY_IN___XML_SCHEMA
    // DOM user data key for back pointers to tree nodes.
    //
    const XMLCh* const tree_node_key = ::xsd::cxx::tree::user_data_keys::node;
#endif
  }
}

// Forward declarations.
//
class PlotType;
class DesisionsType;
class DesisionType;
class OptionsType;
class OptionType;
class WeightType;

#include <memory>    // std::auto_ptr
#include <algorithm> // std::binary_search

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/containers.hxx>
#include <xsd/cxx/tree/list.hxx>

#include <xsd/cxx/xml/dom/parsing-header.hxx>

class PlotType: public ::xml_schema::type
{
  public:
  // desisions
  // 
  typedef ::DesisionsType desisions_type;
  typedef ::xsd::cxx::tree::traits< desisions_type, char > desisions_traits;

  const desisions_type&
  desisions () const;

  desisions_type&
  desisions ();

  void
  desisions (const desisions_type& x);

  void
  desisions (::std::auto_ptr< desisions_type > p);

  // name
  // 
  typedef ::xml_schema::string name_type;
  typedef ::xsd::cxx::tree::optional< name_type > name_optional;
  typedef ::xsd::cxx::tree::traits< name_type, char > name_traits;

  const name_optional&
  name () const;

  name_optional&
  name ();

  void
  name (const name_type& x);

  void
  name (const name_optional& x);

  void
  name (::std::auto_ptr< name_type > p);

  // Constructors.
  //
  PlotType (const desisions_type&);

  PlotType (::std::auto_ptr< desisions_type >&);

  PlotType (const ::xercesc::DOMElement& e,
            ::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0);

  PlotType (const PlotType& x,
            ::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0);

  virtual PlotType*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  virtual 
  ~PlotType ();

  // Implementation.
  //
  protected:
  void
  parse (::xsd::cxx::xml::dom::parser< char >&,
         ::xml_schema::flags);

  protected:
  ::xsd::cxx::tree::one< desisions_type > desisions_;
  name_optional name_;
};

class DesisionsType: public ::xml_schema::type
{
  public:
  // desision
  // 
  typedef ::DesisionType desision_type;
  typedef ::xsd::cxx::tree::sequence< desision_type > desision_sequence;
  typedef desision_sequence::iterator desision_iterator;
  typedef desision_sequence::const_iterator desision_const_iterator;
  typedef ::xsd::cxx::tree::traits< desision_type, char > desision_traits;

  const desision_sequence&
  desision () const;

  desision_sequence&
  desision ();

  void
  desision (const desision_sequence& s);

  // Constructors.
  //
  DesisionsType ();

  DesisionsType (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

  DesisionsType (const DesisionsType& x,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

  virtual DesisionsType*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  virtual 
  ~DesisionsType ();

  // Implementation.
  //
  protected:
  void
  parse (::xsd::cxx::xml::dom::parser< char >&,
         ::xml_schema::flags);

  protected:
  desision_sequence desision_;
};

class DesisionType: public ::xml_schema::type
{
  public:
  // english
  // 
  typedef ::xml_schema::string english_type;
  typedef ::xsd::cxx::tree::traits< english_type, char > english_traits;

  const english_type&
  english () const;

  english_type&
  english ();

  void
  english (const english_type& x);

  void
  english (::std::auto_ptr< english_type > p);

  // options
  // 
  typedef ::OptionsType options_type;
  typedef ::xsd::cxx::tree::traits< options_type, char > options_traits;

  const options_type&
  options () const;

  options_type&
  options ();

  void
  options (const options_type& x);

  void
  options (::std::auto_ptr< options_type > p);

  // name
  // 
  typedef ::xml_schema::string name_type;
  typedef ::xsd::cxx::tree::traits< name_type, char > name_traits;

  const name_type&
  name () const;

  name_type&
  name ();

  void
  name (const name_type& x);

  void
  name (::std::auto_ptr< name_type > p);

  // Constructors.
  //
  DesisionType (const english_type&,
                const options_type&,
                const name_type&);

  DesisionType (const english_type&,
                ::std::auto_ptr< options_type >&,
                const name_type&);

  DesisionType (const ::xercesc::DOMElement& e,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

  DesisionType (const DesisionType& x,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

  virtual DesisionType*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  virtual 
  ~DesisionType ();

  // Implementation.
  //
  protected:
  void
  parse (::xsd::cxx::xml::dom::parser< char >&,
         ::xml_schema::flags);

  protected:
  ::xsd::cxx::tree::one< english_type > english_;
  ::xsd::cxx::tree::one< options_type > options_;
  ::xsd::cxx::tree::one< name_type > name_;
};

class OptionsType: public ::xml_schema::type
{
  public:
  // option
  // 
  typedef ::OptionType option_type;
  typedef ::xsd::cxx::tree::sequence< option_type > option_sequence;
  typedef option_sequence::iterator option_iterator;
  typedef option_sequence::const_iterator option_const_iterator;
  typedef ::xsd::cxx::tree::traits< option_type, char > option_traits;

  const option_sequence&
  option () const;

  option_sequence&
  option ();

  void
  option (const option_sequence& s);

  // Constructors.
  //
  OptionsType ();

  OptionsType (const ::xercesc::DOMElement& e,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

  OptionsType (const OptionsType& x,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

  virtual OptionsType*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  virtual 
  ~OptionsType ();

  // Implementation.
  //
  protected:
  void
  parse (::xsd::cxx::xml::dom::parser< char >&,
         ::xml_schema::flags);

  protected:
  option_sequence option_;
};

class OptionType: public ::xml_schema::type
{
  public:
  // english
  // 
  typedef ::xml_schema::string english_type;
  typedef ::xsd::cxx::tree::traits< english_type, char > english_traits;

  const english_type&
  english () const;

  english_type&
  english ();

  void
  english (const english_type& x);

  void
  english (::std::auto_ptr< english_type > p);

  // weight
  // 
  typedef ::WeightType weight_type;
  typedef ::xsd::cxx::tree::traits< weight_type, char > weight_traits;

  const weight_type&
  weight () const;

  weight_type&
  weight ();

  void
  weight (const weight_type& x);

  void
  weight (::std::auto_ptr< weight_type > p);

  // desisions
  // 
  typedef ::DesisionsType desisions_type;
  typedef ::xsd::cxx::tree::optional< desisions_type > desisions_optional;
  typedef ::xsd::cxx::tree::traits< desisions_type, char > desisions_traits;

  const desisions_optional&
  desisions () const;

  desisions_optional&
  desisions ();

  void
  desisions (const desisions_type& x);

  void
  desisions (const desisions_optional& x);

  void
  desisions (::std::auto_ptr< desisions_type > p);

  // name
  // 
  typedef ::xml_schema::string name_type;
  typedef ::xsd::cxx::tree::traits< name_type, char > name_traits;

  const name_type&
  name () const;

  name_type&
  name ();

  void
  name (const name_type& x);

  void
  name (::std::auto_ptr< name_type > p);

  // id
  // 
  typedef ::xml_schema::integer id_type;
  typedef ::xsd::cxx::tree::traits< id_type, char > id_traits;

  const id_type&
  id () const;

  id_type&
  id ();

  void
  id (const id_type& x);

  // Constructors.
  //
  OptionType (const english_type&,
              const weight_type&,
              const name_type&,
              const id_type&);

  OptionType (const english_type&,
              ::std::auto_ptr< weight_type >&,
              const name_type&,
              const id_type&);

  OptionType (const ::xercesc::DOMElement& e,
              ::xml_schema::flags f = 0,
              ::xml_schema::container* c = 0);

  OptionType (const OptionType& x,
              ::xml_schema::flags f = 0,
              ::xml_schema::container* c = 0);

  virtual OptionType*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  virtual 
  ~OptionType ();

  // Implementation.
  //
  protected:
  void
  parse (::xsd::cxx::xml::dom::parser< char >&,
         ::xml_schema::flags);

  protected:
  ::xsd::cxx::tree::one< english_type > english_;
  ::xsd::cxx::tree::one< weight_type > weight_;
  desisions_optional desisions_;
  ::xsd::cxx::tree::one< name_type > name_;
  ::xsd::cxx::tree::one< id_type > id_;
};

class WeightType: public ::xml_schema::type
{
  public:
  // option_id
  // 
  typedef ::xml_schema::integer option_id_type;
  typedef ::xsd::cxx::tree::traits< option_id_type, char > option_id_traits;

  const option_id_type&
  option_id () const;

  option_id_type&
  option_id ();

  void
  option_id (const option_id_type& x);

  // value
  // 
  typedef ::xml_schema::decimal value_type;
  typedef ::xsd::cxx::tree::optional< value_type > value_optional;
  typedef ::xsd::cxx::tree::traits< value_type, char, ::xsd::cxx::tree::schema_type::decimal > value_traits;

  const value_optional&
  value () const;

  value_optional&
  value ();

  void
  value (const value_type& x);

  void
  value (const value_optional& x);

  // Constructors.
  //
  WeightType (const option_id_type&);

  WeightType (const ::xercesc::DOMElement& e,
              ::xml_schema::flags f = 0,
              ::xml_schema::container* c = 0);

  WeightType (const WeightType& x,
              ::xml_schema::flags f = 0,
              ::xml_schema::container* c = 0);

  virtual WeightType*
  _clone (::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0) const;

  virtual 
  ~WeightType ();

  // Implementation.
  //
  protected:
  void
  parse (::xsd::cxx::xml::dom::parser< char >&,
         ::xml_schema::flags);

  protected:
  ::xsd::cxx::tree::one< option_id_type > option_id_;
  value_optional value_;
};

#include <iosfwd>

#include <xercesc/sax/InputSource.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>

// Parse a URI or a local file.
//

::std::auto_ptr< ::PlotType >
plot (const ::std::string& uri,
      ::xml_schema::flags f = 0,
      const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::PlotType >
plot (const ::std::string& uri,
      ::xml_schema::error_handler& eh,
      ::xml_schema::flags f = 0,
      const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::PlotType >
plot (const ::std::string& uri,
      ::xercesc::DOMErrorHandler& eh,
      ::xml_schema::flags f = 0,
      const ::xml_schema::properties& p = ::xml_schema::properties ());

// Parse std::istream.
//

::std::auto_ptr< ::PlotType >
plot (::std::istream& is,
      ::xml_schema::flags f = 0,
      const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::PlotType >
plot (::std::istream& is,
      ::xml_schema::error_handler& eh,
      ::xml_schema::flags f = 0,
      const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::PlotType >
plot (::std::istream& is,
      ::xercesc::DOMErrorHandler& eh,
      ::xml_schema::flags f = 0,
      const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::PlotType >
plot (::std::istream& is,
      const ::std::string& id,
      ::xml_schema::flags f = 0,
      const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::PlotType >
plot (::std::istream& is,
      const ::std::string& id,
      ::xml_schema::error_handler& eh,
      ::xml_schema::flags f = 0,
      const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::PlotType >
plot (::std::istream& is,
      const ::std::string& id,
      ::xercesc::DOMErrorHandler& eh,
      ::xml_schema::flags f = 0,
      const ::xml_schema::properties& p = ::xml_schema::properties ());

// Parse xercesc::InputSource.
//

::std::auto_ptr< ::PlotType >
plot (::xercesc::InputSource& is,
      ::xml_schema::flags f = 0,
      const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::PlotType >
plot (::xercesc::InputSource& is,
      ::xml_schema::error_handler& eh,
      ::xml_schema::flags f = 0,
      const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::PlotType >
plot (::xercesc::InputSource& is,
      ::xercesc::DOMErrorHandler& eh,
      ::xml_schema::flags f = 0,
      const ::xml_schema::properties& p = ::xml_schema::properties ());

// Parse xercesc::DOMDocument.
//

::std::auto_ptr< ::PlotType >
plot (const ::xercesc::DOMDocument& d,
      ::xml_schema::flags f = 0,
      const ::xml_schema::properties& p = ::xml_schema::properties ());

::std::auto_ptr< ::PlotType >
plot (::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument >& d,
      ::xml_schema::flags f = 0,
      const ::xml_schema::properties& p = ::xml_schema::properties ());

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // MYSTERY_HXX
