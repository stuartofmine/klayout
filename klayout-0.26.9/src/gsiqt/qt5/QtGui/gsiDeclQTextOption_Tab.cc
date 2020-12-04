
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
*  @file gsiDeclQTextOption_Tab.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextOption>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QTextOption::Tab

//  Constructor QTextOption::Tab::Tab()


static void _init_ctor_QTextOption_Tab_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextOption::Tab> ();
}

static void _call_ctor_QTextOption_Tab_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextOption::Tab *> (new QTextOption::Tab ());
}


//  Constructor QTextOption::Tab::Tab(double pos, QTextOption::TabType tabType, QChar delim)


static void _init_ctor_QTextOption_Tab_4138 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("tabType");
  decl->add_arg<const qt_gsi::Converter<QTextOption::TabType>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("delim", true, "QChar()");
  decl->add_arg<const qt_gsi::Converter<QChar>::target_type & > (argspec_2);
  decl->set_return_new<QTextOption::Tab> ();
}

static void _call_ctor_QTextOption_Tab_4138 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  const qt_gsi::Converter<QTextOption::TabType>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<QTextOption::TabType>::target_type & >() (args, heap);
  const qt_gsi::Converter<QChar>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<QChar>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QChar>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QChar>(heap, QChar()), heap);
  ret.write<QTextOption::Tab *> (new QTextOption::Tab (arg1, qt_gsi::QtToCppAdaptor<QTextOption::TabType>(arg2).cref(), qt_gsi::QtToCppAdaptor<QChar>(arg3).cref()));
}


// bool QTextOption::Tab::operator!=(const QTextOption::Tab &other)


static void _init_f_operator_excl__eq__c2843 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QTextOption::Tab & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2843 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextOption::Tab &arg1 = gsi::arg_reader<const QTextOption::Tab & >() (args, heap);
  ret.write<bool > ((bool)((QTextOption::Tab *)cls)->operator!= (arg1));
}


// bool QTextOption::Tab::operator==(const QTextOption::Tab &other)


static void _init_f_operator_eq__eq__c2843 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QTextOption::Tab & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2843 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextOption::Tab &arg1 = gsi::arg_reader<const QTextOption::Tab & >() (args, heap);
  ret.write<bool > ((bool)((QTextOption::Tab *)cls)->operator== (arg1));
}



namespace gsi
{

static gsi::Methods methods_QTextOption_Tab () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextOption::Tab::Tab()\nThis method creates an object of class QTextOption::Tab.", &_init_ctor_QTextOption_Tab_0, &_call_ctor_QTextOption_Tab_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextOption::Tab::Tab(double pos, QTextOption::TabType tabType, QChar delim)\nThis method creates an object of class QTextOption::Tab.", &_init_ctor_QTextOption_Tab_4138, &_call_ctor_QTextOption_Tab_4138);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QTextOption::Tab::operator!=(const QTextOption::Tab &other)\n", true, &_init_f_operator_excl__eq__c2843, &_call_f_operator_excl__eq__c2843);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QTextOption::Tab::operator==(const QTextOption::Tab &other)\n", true, &_init_f_operator_eq__eq__c2843, &_call_f_operator_eq__eq__c2843);
  return methods;
}

gsi::Class<QTextOption::Tab> decl_QTextOption_Tab ("QtGui", "QTextOption_Tab",
  methods_QTextOption_Tab (),
  "@qt\n@brief Binding of QTextOption::Tab");

gsi::ClassExt<QTextOption> decl_QTextOption_Tab_as_child (decl_QTextOption_Tab, "Tab");

GSI_QTGUI_PUBLIC gsi::Class<QTextOption::Tab> &qtdecl_QTextOption_Tab () { return decl_QTextOption_Tab; }

}

