
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
*  @file gsiDeclQDeferredDeleteEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDeferredDeleteEvent>
#include <QEvent>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDeferredDeleteEvent

// int QDeferredDeleteEvent::loopLevel()


static void _init_f_loopLevel_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_loopLevel_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QDeferredDeleteEvent *)cls)->loopLevel ());
}


namespace gsi
{

static gsi::Methods methods_QDeferredDeleteEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("loopLevel", "@brief Method int QDeferredDeleteEvent::loopLevel()\n", true, &_init_f_loopLevel_c0, &_call_f_loopLevel_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QDeferredDeleteEvent> decl_QDeferredDeleteEvent (qtdecl_QEvent (), "QtCore", "QDeferredDeleteEvent_Native",
  methods_QDeferredDeleteEvent (),
  "@hide\n@alias QDeferredDeleteEvent");

GSI_QTCORE_PUBLIC gsi::Class<QDeferredDeleteEvent> &qtdecl_QDeferredDeleteEvent () { return decl_QDeferredDeleteEvent; }

}


class QDeferredDeleteEvent_Adaptor : public QDeferredDeleteEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QDeferredDeleteEvent_Adaptor();

  //  [adaptor ctor] QDeferredDeleteEvent::QDeferredDeleteEvent()
  QDeferredDeleteEvent_Adaptor() : QDeferredDeleteEvent()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QDeferredDeleteEvent_Adaptor::~QDeferredDeleteEvent_Adaptor() { }

//  Constructor QDeferredDeleteEvent::QDeferredDeleteEvent() (adaptor class)

static void _init_ctor_QDeferredDeleteEvent_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDeferredDeleteEvent_Adaptor> ();
}

static void _call_ctor_QDeferredDeleteEvent_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDeferredDeleteEvent_Adaptor *> (new QDeferredDeleteEvent_Adaptor ());
}


namespace gsi
{

gsi::Class<QDeferredDeleteEvent> &qtdecl_QDeferredDeleteEvent ();

static gsi::Methods methods_QDeferredDeleteEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDeferredDeleteEvent::QDeferredDeleteEvent()\nThis method creates an object of class QDeferredDeleteEvent.", &_init_ctor_QDeferredDeleteEvent_Adaptor_0, &_call_ctor_QDeferredDeleteEvent_Adaptor_0);
  return methods;
}

gsi::Class<QDeferredDeleteEvent_Adaptor> decl_QDeferredDeleteEvent_Adaptor (qtdecl_QDeferredDeleteEvent (), "QtCore", "QDeferredDeleteEvent",
  methods_QDeferredDeleteEvent_Adaptor (),
  "@qt\n@brief Binding of QDeferredDeleteEvent");

}

