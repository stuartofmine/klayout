
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2020 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQTextBlock_Iterator.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextBlock>
#include <QTextFragment>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextBlock::iterator

//  Constructor QTextBlock::iterator::iterator()


static void _init_ctor_QTextBlock_Iterator_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextBlock::iterator> ();
}

static void _call_ctor_QTextBlock_Iterator_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextBlock::iterator *> (new QTextBlock::iterator ());
}


//  Constructor QTextBlock::iterator::iterator(const QTextBlock::iterator &o)


static void _init_ctor_QTextBlock_Iterator_3296 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextBlock::iterator & > (argspec_0);
  decl->set_return_new<QTextBlock::iterator> ();
}

static void _call_ctor_QTextBlock_Iterator_3296 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock::iterator &arg1 = gsi::arg_reader<const QTextBlock::iterator & >() (args, heap);
  ret.write<QTextBlock::iterator *> (new QTextBlock::iterator (arg1));
}


// bool QTextBlock::iterator::atEnd()


static void _init_f_atEnd_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_atEnd_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextBlock::iterator *)cls)->atEnd ());
}


// QTextFragment QTextBlock::iterator::fragment()


static void _init_f_fragment_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextFragment > ();
}

static void _call_f_fragment_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextFragment > ((QTextFragment)((QTextBlock::iterator *)cls)->fragment ());
}


// bool QTextBlock::iterator::operator!=(const QTextBlock::iterator &o)


static void _init_f_operator_excl__eq__c3296 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextBlock::iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3296 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock::iterator &arg1 = gsi::arg_reader<const QTextBlock::iterator & >() (args, heap);
  ret.write<bool > ((bool)((QTextBlock::iterator *)cls)->operator!= (arg1));
}


// QTextBlock::iterator &QTextBlock::iterator::operator++()


static void _init_f_operator_plus__plus__0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextBlock::iterator & > ();
}

static void _call_f_operator_plus__plus__0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextBlock::iterator & > ((QTextBlock::iterator &)((QTextBlock::iterator *)cls)->operator++ ());
}


// QTextBlock::iterator QTextBlock::iterator::operator++(int)


static void _init_f_operator_plus__plus__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QTextBlock::iterator > ();
}

static void _call_f_operator_plus__plus__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QTextBlock::iterator > ((QTextBlock::iterator)((QTextBlock::iterator *)cls)->operator++ (arg1));
}


// QTextBlock::iterator &QTextBlock::iterator::operator--()


static void _init_f_operator_minus__minus__0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextBlock::iterator & > ();
}

static void _call_f_operator_minus__minus__0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextBlock::iterator & > ((QTextBlock::iterator &)((QTextBlock::iterator *)cls)->operator-- ());
}


// QTextBlock::iterator QTextBlock::iterator::operator--(int)


static void _init_f_operator_minus__minus__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QTextBlock::iterator > ();
}

static void _call_f_operator_minus__minus__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QTextBlock::iterator > ((QTextBlock::iterator)((QTextBlock::iterator *)cls)->operator-- (arg1));
}


// bool QTextBlock::iterator::operator==(const QTextBlock::iterator &o)


static void _init_f_operator_eq__eq__c3296 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextBlock::iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3296 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock::iterator &arg1 = gsi::arg_reader<const QTextBlock::iterator & >() (args, heap);
  ret.write<bool > ((bool)((QTextBlock::iterator *)cls)->operator== (arg1));
}



namespace gsi
{

static gsi::Methods methods_QTextBlock_Iterator () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextBlock::iterator::iterator()\nThis method creates an object of class QTextBlock::iterator.", &_init_ctor_QTextBlock_Iterator_0, &_call_ctor_QTextBlock_Iterator_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextBlock::iterator::iterator(const QTextBlock::iterator &o)\nThis method creates an object of class QTextBlock::iterator.", &_init_ctor_QTextBlock_Iterator_3296, &_call_ctor_QTextBlock_Iterator_3296);
  methods += new qt_gsi::GenericMethod ("atEnd", "@brief Method bool QTextBlock::iterator::atEnd()\n", true, &_init_f_atEnd_c0, &_call_f_atEnd_c0);
  methods += new qt_gsi::GenericMethod ("fragment", "@brief Method QTextFragment QTextBlock::iterator::fragment()\n", true, &_init_f_fragment_c0, &_call_f_fragment_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QTextBlock::iterator::operator!=(const QTextBlock::iterator &o)\n", true, &_init_f_operator_excl__eq__c3296, &_call_f_operator_excl__eq__c3296);
  methods += new qt_gsi::GenericMethod ("++", "@brief Method QTextBlock::iterator &QTextBlock::iterator::operator++()\n", false, &_init_f_operator_plus__plus__0, &_call_f_operator_plus__plus__0);
  methods += new qt_gsi::GenericMethod ("++", "@brief Method QTextBlock::iterator QTextBlock::iterator::operator++(int)\n", false, &_init_f_operator_plus__plus__767, &_call_f_operator_plus__plus__767);
  methods += new qt_gsi::GenericMethod ("--", "@brief Method QTextBlock::iterator &QTextBlock::iterator::operator--()\n", false, &_init_f_operator_minus__minus__0, &_call_f_operator_minus__minus__0);
  methods += new qt_gsi::GenericMethod ("--", "@brief Method QTextBlock::iterator QTextBlock::iterator::operator--(int)\n", false, &_init_f_operator_minus__minus__767, &_call_f_operator_minus__minus__767);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QTextBlock::iterator::operator==(const QTextBlock::iterator &o)\n", true, &_init_f_operator_eq__eq__c3296, &_call_f_operator_eq__eq__c3296);
  return methods;
}

gsi::Class<QTextBlock::iterator> decl_QTextBlock_Iterator ("QtGui", "QTextBlock_Iterator",
  methods_QTextBlock_Iterator (),
  "@qt\n@brief Binding of QTextBlock::iterator");

gsi::ClassExt<QTextBlock> decl_QTextBlock_Iterator_as_child (decl_QTextBlock_Iterator, "Iterator");

GSI_QTGUI_PUBLIC gsi::Class<QTextBlock::iterator> &qtdecl_QTextBlock_Iterator () { return decl_QTextBlock_Iterator; }

}

