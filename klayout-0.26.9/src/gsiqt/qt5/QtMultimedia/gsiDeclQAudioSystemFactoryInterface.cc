
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
*  @file gsiDeclQAudioSystemFactoryInterface.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAudioSystemFactoryInterface>
#include <QAbstractAudioDeviceInfo>
#include <QAbstractAudioInput>
#include <QAbstractAudioOutput>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QAudioSystemFactoryInterface

// QList<QByteArray> QAudioSystemFactoryInterface::availableDevices(QAudio::Mode)


static void _init_f_availableDevices_c1520 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QAudio::Mode>::target_type & > (argspec_0);
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_availableDevices_c1520 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAudio::Mode>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAudio::Mode>::target_type & >() (args, heap);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)((QAudioSystemFactoryInterface *)cls)->availableDevices (qt_gsi::QtToCppAdaptor<QAudio::Mode>(arg1).cref()));
}


// QAbstractAudioDeviceInfo *QAudioSystemFactoryInterface::createDeviceInfo(const QByteArray &device, QAudio::Mode mode)


static void _init_f_createDeviceInfo_3721 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode");
  decl->add_arg<const qt_gsi::Converter<QAudio::Mode>::target_type & > (argspec_1);
  decl->set_return<QAbstractAudioDeviceInfo * > ();
}

static void _call_f_createDeviceInfo_3721 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  const qt_gsi::Converter<QAudio::Mode>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<QAudio::Mode>::target_type & >() (args, heap);
  ret.write<QAbstractAudioDeviceInfo * > ((QAbstractAudioDeviceInfo *)((QAudioSystemFactoryInterface *)cls)->createDeviceInfo (arg1, qt_gsi::QtToCppAdaptor<QAudio::Mode>(arg2).cref()));
}


// QAbstractAudioInput *QAudioSystemFactoryInterface::createInput(const QByteArray &device)


static void _init_f_createInput_2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QAbstractAudioInput * > ();
}

static void _call_f_createInput_2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QAbstractAudioInput * > ((QAbstractAudioInput *)((QAudioSystemFactoryInterface *)cls)->createInput (arg1));
}


// QAbstractAudioOutput *QAudioSystemFactoryInterface::createOutput(const QByteArray &device)


static void _init_f_createOutput_2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QAbstractAudioOutput * > ();
}

static void _call_f_createOutput_2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QAbstractAudioOutput * > ((QAbstractAudioOutput *)((QAudioSystemFactoryInterface *)cls)->createOutput (arg1));
}


namespace gsi
{

static gsi::Methods methods_QAudioSystemFactoryInterface () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("availableDevices", "@brief Method QList<QByteArray> QAudioSystemFactoryInterface::availableDevices(QAudio::Mode)\n", true, &_init_f_availableDevices_c1520, &_call_f_availableDevices_c1520);
  methods += new qt_gsi::GenericMethod ("createDeviceInfo", "@brief Method QAbstractAudioDeviceInfo *QAudioSystemFactoryInterface::createDeviceInfo(const QByteArray &device, QAudio::Mode mode)\n", false, &_init_f_createDeviceInfo_3721, &_call_f_createDeviceInfo_3721);
  methods += new qt_gsi::GenericMethod ("createInput", "@brief Method QAbstractAudioInput *QAudioSystemFactoryInterface::createInput(const QByteArray &device)\n", false, &_init_f_createInput_2309, &_call_f_createInput_2309);
  methods += new qt_gsi::GenericMethod ("createOutput", "@brief Method QAbstractAudioOutput *QAudioSystemFactoryInterface::createOutput(const QByteArray &device)\n", false, &_init_f_createOutput_2309, &_call_f_createOutput_2309);
  return methods;
}

gsi::Class<QAudioSystemFactoryInterface> decl_QAudioSystemFactoryInterface ("QtMultimedia", "QAudioSystemFactoryInterface_Native",
  methods_QAudioSystemFactoryInterface (),
  "@hide\n@alias QAudioSystemFactoryInterface");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QAudioSystemFactoryInterface> &qtdecl_QAudioSystemFactoryInterface () { return decl_QAudioSystemFactoryInterface; }

}


class QAudioSystemFactoryInterface_Adaptor : public QAudioSystemFactoryInterface, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAudioSystemFactoryInterface_Adaptor();

  //  [adaptor ctor] QAudioSystemFactoryInterface::QAudioSystemFactoryInterface()
  QAudioSystemFactoryInterface_Adaptor() : QAudioSystemFactoryInterface()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QList<QByteArray> QAudioSystemFactoryInterface::availableDevices(QAudio::Mode)
  QList<QByteArray> cbs_availableDevices_c1520_0(const qt_gsi::Converter<QAudio::Mode>::target_type & arg1) const
  {
    __SUPPRESS_UNUSED_WARNING (arg1);
    throw qt_gsi::AbstractMethodCalledException("availableDevices");
  }

  virtual QList<QByteArray> availableDevices(QAudio::Mode arg1) const
  {
    if (cb_availableDevices_c1520_0.can_issue()) {
      return cb_availableDevices_c1520_0.issue<QAudioSystemFactoryInterface_Adaptor, QList<QByteArray>, const qt_gsi::Converter<QAudio::Mode>::target_type &>(&QAudioSystemFactoryInterface_Adaptor::cbs_availableDevices_c1520_0, qt_gsi::CppToQtAdaptor<QAudio::Mode>(arg1));
    } else {
      throw qt_gsi::AbstractMethodCalledException("availableDevices");
    }
  }

  //  [adaptor impl] QAbstractAudioDeviceInfo *QAudioSystemFactoryInterface::createDeviceInfo(const QByteArray &device, QAudio::Mode mode)
  QAbstractAudioDeviceInfo * cbs_createDeviceInfo_3721_0(const QByteArray &device, const qt_gsi::Converter<QAudio::Mode>::target_type & mode)
  {
    __SUPPRESS_UNUSED_WARNING (device);
    __SUPPRESS_UNUSED_WARNING (mode);
    throw qt_gsi::AbstractMethodCalledException("createDeviceInfo");
  }

  virtual QAbstractAudioDeviceInfo * createDeviceInfo(const QByteArray &device, QAudio::Mode mode)
  {
    if (cb_createDeviceInfo_3721_0.can_issue()) {
      return cb_createDeviceInfo_3721_0.issue<QAudioSystemFactoryInterface_Adaptor, QAbstractAudioDeviceInfo *, const QByteArray &, const qt_gsi::Converter<QAudio::Mode>::target_type &>(&QAudioSystemFactoryInterface_Adaptor::cbs_createDeviceInfo_3721_0, device, qt_gsi::CppToQtAdaptor<QAudio::Mode>(mode));
    } else {
      throw qt_gsi::AbstractMethodCalledException("createDeviceInfo");
    }
  }

  //  [adaptor impl] QAbstractAudioInput *QAudioSystemFactoryInterface::createInput(const QByteArray &device)
  QAbstractAudioInput * cbs_createInput_2309_0(const QByteArray &device)
  {
    __SUPPRESS_UNUSED_WARNING (device);
    throw qt_gsi::AbstractMethodCalledException("createInput");
  }

  virtual QAbstractAudioInput * createInput(const QByteArray &device)
  {
    if (cb_createInput_2309_0.can_issue()) {
      return cb_createInput_2309_0.issue<QAudioSystemFactoryInterface_Adaptor, QAbstractAudioInput *, const QByteArray &>(&QAudioSystemFactoryInterface_Adaptor::cbs_createInput_2309_0, device);
    } else {
      throw qt_gsi::AbstractMethodCalledException("createInput");
    }
  }

  //  [adaptor impl] QAbstractAudioOutput *QAudioSystemFactoryInterface::createOutput(const QByteArray &device)
  QAbstractAudioOutput * cbs_createOutput_2309_0(const QByteArray &device)
  {
    __SUPPRESS_UNUSED_WARNING (device);
    throw qt_gsi::AbstractMethodCalledException("createOutput");
  }

  virtual QAbstractAudioOutput * createOutput(const QByteArray &device)
  {
    if (cb_createOutput_2309_0.can_issue()) {
      return cb_createOutput_2309_0.issue<QAudioSystemFactoryInterface_Adaptor, QAbstractAudioOutput *, const QByteArray &>(&QAudioSystemFactoryInterface_Adaptor::cbs_createOutput_2309_0, device);
    } else {
      throw qt_gsi::AbstractMethodCalledException("createOutput");
    }
  }

  gsi::Callback cb_availableDevices_c1520_0;
  gsi::Callback cb_createDeviceInfo_3721_0;
  gsi::Callback cb_createInput_2309_0;
  gsi::Callback cb_createOutput_2309_0;
};

QAudioSystemFactoryInterface_Adaptor::~QAudioSystemFactoryInterface_Adaptor() { }

//  Constructor QAudioSystemFactoryInterface::QAudioSystemFactoryInterface() (adaptor class)

static void _init_ctor_QAudioSystemFactoryInterface_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAudioSystemFactoryInterface_Adaptor> ();
}

static void _call_ctor_QAudioSystemFactoryInterface_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioSystemFactoryInterface_Adaptor *> (new QAudioSystemFactoryInterface_Adaptor ());
}


// QList<QByteArray> QAudioSystemFactoryInterface::availableDevices(QAudio::Mode)

static void _init_cbs_availableDevices_c1520_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QAudio::Mode>::target_type & > (argspec_0);
  decl->set_return<QList<QByteArray> > ();
}

static void _call_cbs_availableDevices_c1520_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAudio::Mode>::target_type & arg1 = args.read<const qt_gsi::Converter<QAudio::Mode>::target_type & > (heap);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)((QAudioSystemFactoryInterface_Adaptor *)cls)->cbs_availableDevices_c1520_0 (arg1));
}

static void _set_callback_cbs_availableDevices_c1520_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioSystemFactoryInterface_Adaptor *)cls)->cb_availableDevices_c1520_0 = cb;
}


// QAbstractAudioDeviceInfo *QAudioSystemFactoryInterface::createDeviceInfo(const QByteArray &device, QAudio::Mode mode)

static void _init_cbs_createDeviceInfo_3721_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode");
  decl->add_arg<const qt_gsi::Converter<QAudio::Mode>::target_type & > (argspec_1);
  decl->set_return<QAbstractAudioDeviceInfo * > ();
}

static void _call_cbs_createDeviceInfo_3721_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  const qt_gsi::Converter<QAudio::Mode>::target_type & arg2 = args.read<const qt_gsi::Converter<QAudio::Mode>::target_type & > (heap);
  ret.write<QAbstractAudioDeviceInfo * > ((QAbstractAudioDeviceInfo *)((QAudioSystemFactoryInterface_Adaptor *)cls)->cbs_createDeviceInfo_3721_0 (arg1, arg2));
}

static void _set_callback_cbs_createDeviceInfo_3721_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioSystemFactoryInterface_Adaptor *)cls)->cb_createDeviceInfo_3721_0 = cb;
}


// QAbstractAudioInput *QAudioSystemFactoryInterface::createInput(const QByteArray &device)

static void _init_cbs_createInput_2309_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QAbstractAudioInput * > ();
}

static void _call_cbs_createInput_2309_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  ret.write<QAbstractAudioInput * > ((QAbstractAudioInput *)((QAudioSystemFactoryInterface_Adaptor *)cls)->cbs_createInput_2309_0 (arg1));
}

static void _set_callback_cbs_createInput_2309_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioSystemFactoryInterface_Adaptor *)cls)->cb_createInput_2309_0 = cb;
}


// QAbstractAudioOutput *QAudioSystemFactoryInterface::createOutput(const QByteArray &device)

static void _init_cbs_createOutput_2309_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QAbstractAudioOutput * > ();
}

static void _call_cbs_createOutput_2309_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  ret.write<QAbstractAudioOutput * > ((QAbstractAudioOutput *)((QAudioSystemFactoryInterface_Adaptor *)cls)->cbs_createOutput_2309_0 (arg1));
}

static void _set_callback_cbs_createOutput_2309_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioSystemFactoryInterface_Adaptor *)cls)->cb_createOutput_2309_0 = cb;
}


namespace gsi
{

gsi::Class<QAudioSystemFactoryInterface> &qtdecl_QAudioSystemFactoryInterface ();

static gsi::Methods methods_QAudioSystemFactoryInterface_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioSystemFactoryInterface::QAudioSystemFactoryInterface()\nThis method creates an object of class QAudioSystemFactoryInterface.", &_init_ctor_QAudioSystemFactoryInterface_Adaptor_0, &_call_ctor_QAudioSystemFactoryInterface_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("availableDevices", "@hide", true, &_init_cbs_availableDevices_c1520_0, &_call_cbs_availableDevices_c1520_0);
  methods += new qt_gsi::GenericMethod ("availableDevices", "@brief Virtual method QList<QByteArray> QAudioSystemFactoryInterface::availableDevices(QAudio::Mode)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_availableDevices_c1520_0, &_call_cbs_availableDevices_c1520_0, &_set_callback_cbs_availableDevices_c1520_0);
  methods += new qt_gsi::GenericMethod ("createDeviceInfo", "@hide", false, &_init_cbs_createDeviceInfo_3721_0, &_call_cbs_createDeviceInfo_3721_0);
  methods += new qt_gsi::GenericMethod ("createDeviceInfo", "@brief Virtual method QAbstractAudioDeviceInfo *QAudioSystemFactoryInterface::createDeviceInfo(const QByteArray &device, QAudio::Mode mode)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_createDeviceInfo_3721_0, &_call_cbs_createDeviceInfo_3721_0, &_set_callback_cbs_createDeviceInfo_3721_0);
  methods += new qt_gsi::GenericMethod ("createInput", "@hide", false, &_init_cbs_createInput_2309_0, &_call_cbs_createInput_2309_0);
  methods += new qt_gsi::GenericMethod ("createInput", "@brief Virtual method QAbstractAudioInput *QAudioSystemFactoryInterface::createInput(const QByteArray &device)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_createInput_2309_0, &_call_cbs_createInput_2309_0, &_set_callback_cbs_createInput_2309_0);
  methods += new qt_gsi::GenericMethod ("createOutput", "@hide", false, &_init_cbs_createOutput_2309_0, &_call_cbs_createOutput_2309_0);
  methods += new qt_gsi::GenericMethod ("createOutput", "@brief Virtual method QAbstractAudioOutput *QAudioSystemFactoryInterface::createOutput(const QByteArray &device)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_createOutput_2309_0, &_call_cbs_createOutput_2309_0, &_set_callback_cbs_createOutput_2309_0);
  return methods;
}

gsi::Class<QAudioSystemFactoryInterface_Adaptor> decl_QAudioSystemFactoryInterface_Adaptor (qtdecl_QAudioSystemFactoryInterface (), "QtMultimedia", "QAudioSystemFactoryInterface",
  methods_QAudioSystemFactoryInterface_Adaptor (),
  "@qt\n@brief Binding of QAudioSystemFactoryInterface");

}

