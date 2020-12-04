
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
*  @file gsiDeclQMetaMethod.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMetaMethod>
#include <QMetaObject>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMetaMethod

//  Constructor QMetaMethod::QMetaMethod()


static void _init_ctor_QMetaMethod_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMetaMethod> ();
}

static void _call_ctor_QMetaMethod_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMetaMethod *> (new QMetaMethod ());
}


// QMetaMethod::Access QMetaMethod::access()


static void _init_f_access_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QMetaMethod::Access>::target_type > ();
}

static void _call_f_access_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QMetaMethod::Access>::target_type > ((qt_gsi::Converter<QMetaMethod::Access>::target_type)qt_gsi::CppToQtAdaptor<QMetaMethod::Access>(((QMetaMethod *)cls)->access ()));
}


// int QMetaMethod::attributes()


static void _init_f_attributes_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_attributes_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMetaMethod *)cls)->attributes ());
}


// const QMetaObject *QMetaMethod::enclosingMetaObject()


static void _init_f_enclosingMetaObject_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QMetaObject * > ();
}

static void _call_f_enclosingMetaObject_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QMetaObject * > ((const QMetaObject *)((QMetaMethod *)cls)->enclosingMetaObject ());
}


// int QMetaMethod::methodIndex()


static void _init_f_methodIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_methodIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMetaMethod *)cls)->methodIndex ());
}


// QMetaMethod::MethodType QMetaMethod::methodType()


static void _init_f_methodType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QMetaMethod::MethodType>::target_type > ();
}

static void _call_f_methodType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QMetaMethod::MethodType>::target_type > ((qt_gsi::Converter<QMetaMethod::MethodType>::target_type)qt_gsi::CppToQtAdaptor<QMetaMethod::MethodType>(((QMetaMethod *)cls)->methodType ()));
}


// QList<QByteArray> QMetaMethod::parameterNames()


static void _init_f_parameterNames_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_parameterNames_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)((QMetaMethod *)cls)->parameterNames ());
}


// QList<QByteArray> QMetaMethod::parameterTypes()


static void _init_f_parameterTypes_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_parameterTypes_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)((QMetaMethod *)cls)->parameterTypes ());
}


// const char *QMetaMethod::signature()


static void _init_f_signature_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const char * > ();
}

static void _call_f_signature_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const char * > ((const char *)((QMetaMethod *)cls)->signature ());
}


// const char *QMetaMethod::tag()


static void _init_f_tag_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const char * > ();
}

static void _call_f_tag_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const char * > ((const char *)((QMetaMethod *)cls)->tag ());
}


// const char *QMetaMethod::typeName()


static void _init_f_typeName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const char * > ();
}

static void _call_f_typeName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const char * > ((const char *)((QMetaMethod *)cls)->typeName ());
}



namespace gsi
{

static gsi::Methods methods_QMetaMethod () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMetaMethod::QMetaMethod()\nThis method creates an object of class QMetaMethod.", &_init_ctor_QMetaMethod_0, &_call_ctor_QMetaMethod_0);
  methods += new qt_gsi::GenericMethod ("access", "@brief Method QMetaMethod::Access QMetaMethod::access()\n", true, &_init_f_access_c0, &_call_f_access_c0);
  methods += new qt_gsi::GenericMethod ("attributes", "@brief Method int QMetaMethod::attributes()\n", true, &_init_f_attributes_c0, &_call_f_attributes_c0);
  methods += new qt_gsi::GenericMethod ("enclosingMetaObject", "@brief Method const QMetaObject *QMetaMethod::enclosingMetaObject()\n", true, &_init_f_enclosingMetaObject_c0, &_call_f_enclosingMetaObject_c0);
  methods += new qt_gsi::GenericMethod ("methodIndex", "@brief Method int QMetaMethod::methodIndex()\n", true, &_init_f_methodIndex_c0, &_call_f_methodIndex_c0);
  methods += new qt_gsi::GenericMethod ("methodType", "@brief Method QMetaMethod::MethodType QMetaMethod::methodType()\n", true, &_init_f_methodType_c0, &_call_f_methodType_c0);
  methods += new qt_gsi::GenericMethod ("parameterNames", "@brief Method QList<QByteArray> QMetaMethod::parameterNames()\n", true, &_init_f_parameterNames_c0, &_call_f_parameterNames_c0);
  methods += new qt_gsi::GenericMethod ("parameterTypes", "@brief Method QList<QByteArray> QMetaMethod::parameterTypes()\n", true, &_init_f_parameterTypes_c0, &_call_f_parameterTypes_c0);
  methods += new qt_gsi::GenericMethod ("signature", "@brief Method const char *QMetaMethod::signature()\n", true, &_init_f_signature_c0, &_call_f_signature_c0);
  methods += new qt_gsi::GenericMethod ("tag", "@brief Method const char *QMetaMethod::tag()\n", true, &_init_f_tag_c0, &_call_f_tag_c0);
  methods += new qt_gsi::GenericMethod ("typeName", "@brief Method const char *QMetaMethod::typeName()\n", true, &_init_f_typeName_c0, &_call_f_typeName_c0);
  return methods;
}

gsi::Class<QMetaMethod> decl_QMetaMethod ("QtCore", "QMetaMethod",
  methods_QMetaMethod (),
  "@qt\n@brief Binding of QMetaMethod");


GSI_QTCORE_PUBLIC gsi::Class<QMetaMethod> &qtdecl_QMetaMethod () { return decl_QMetaMethod; }

}


//  Implementation of the enum wrapper class for QMetaMethod::Access
namespace qt_gsi
{

static gsi::Enum<QMetaMethod::Access> decl_QMetaMethod_Access_Enum ("QtCore", "QMetaMethod_Access",
    gsi::enum_const ("Private", QMetaMethod::Private, "@brief Enum constant QMetaMethod::Private") +
    gsi::enum_const ("Protected", QMetaMethod::Protected, "@brief Enum constant QMetaMethod::Protected") +
    gsi::enum_const ("Public", QMetaMethod::Public, "@brief Enum constant QMetaMethod::Public"),
  "@qt\n@brief This class represents the QMetaMethod::Access enum");

static gsi::QFlagsClass<QMetaMethod::Access > decl_QMetaMethod_Access_Enums ("QtCore", "QMetaMethod_QFlags_Access",
  "@qt\n@brief This class represents the QFlags<QMetaMethod::Access> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QMetaMethod> inject_QMetaMethod_Access_Enum_in_parent (decl_QMetaMethod_Access_Enum.defs ());
static gsi::ClassExt<QMetaMethod> decl_QMetaMethod_Access_Enum_as_child (decl_QMetaMethod_Access_Enum, "Access");
static gsi::ClassExt<QMetaMethod> decl_QMetaMethod_Access_Enums_as_child (decl_QMetaMethod_Access_Enums, "QFlags_Access");

}


//  Implementation of the enum wrapper class for QMetaMethod::MethodType
namespace qt_gsi
{

static gsi::Enum<QMetaMethod::MethodType> decl_QMetaMethod_MethodType_Enum ("QtCore", "QMetaMethod_MethodType",
    gsi::enum_const ("Method", QMetaMethod::Method, "@brief Enum constant QMetaMethod::Method") +
    gsi::enum_const ("Signal", QMetaMethod::Signal, "@brief Enum constant QMetaMethod::Signal") +
    gsi::enum_const ("Slot", QMetaMethod::Slot, "@brief Enum constant QMetaMethod::Slot") +
    gsi::enum_const ("Constructor", QMetaMethod::Constructor, "@brief Enum constant QMetaMethod::Constructor"),
  "@qt\n@brief This class represents the QMetaMethod::MethodType enum");

static gsi::QFlagsClass<QMetaMethod::MethodType > decl_QMetaMethod_MethodType_Enums ("QtCore", "QMetaMethod_QFlags_MethodType",
  "@qt\n@brief This class represents the QFlags<QMetaMethod::MethodType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QMetaMethod> inject_QMetaMethod_MethodType_Enum_in_parent (decl_QMetaMethod_MethodType_Enum.defs ());
static gsi::ClassExt<QMetaMethod> decl_QMetaMethod_MethodType_Enum_as_child (decl_QMetaMethod_MethodType_Enum, "MethodType");
static gsi::ClassExt<QMetaMethod> decl_QMetaMethod_MethodType_Enums_as_child (decl_QMetaMethod_MethodType_Enums, "QFlags_MethodType");

}

