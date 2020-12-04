
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
*  @file gsiDeclQGraphicsTransform.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QGraphicsTransform>
#include <QChildEvent>
#include <QEvent>
#include <QMatrix4x4>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QGraphicsTransform

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QGraphicsTransform::staticMetaObject);
}


// void QGraphicsTransform::applyTo(QMatrix4x4 *matrix)


static void _init_f_applyTo_c1556 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("matrix");
  decl->add_arg<QMatrix4x4 * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_applyTo_c1556 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMatrix4x4 *arg1 = gsi::arg_reader<QMatrix4x4 * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsTransform *)cls)->applyTo (arg1);
}


// static QString QGraphicsTransform::tr(const char *s, const char *c)


static void _init_f_tr_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_tr_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QGraphicsTransform::tr (arg1, arg2));
}


// static QString QGraphicsTransform::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QGraphicsTransform::tr (arg1, arg2, arg3));
}


// static QString QGraphicsTransform::trUtf8(const char *s, const char *c)


static void _init_f_trUtf8_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QGraphicsTransform::trUtf8 (arg1, arg2));
}


// static QString QGraphicsTransform::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QGraphicsTransform::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QGraphicsTransform () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("applyTo", "@brief Method void QGraphicsTransform::applyTo(QMatrix4x4 *matrix)\n", true, &_init_f_applyTo_c1556, &_call_f_applyTo_c1556);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QGraphicsTransform::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QGraphicsTransform::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QGraphicsTransform::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QGraphicsTransform::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QGraphicsTransform::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QGraphicsTransform> decl_QGraphicsTransform (qtdecl_QObject (), "QtGui", "QGraphicsTransform_Native",
  methods_QGraphicsTransform (),
  "@hide\n@alias QGraphicsTransform");

GSI_QTGUI_PUBLIC gsi::Class<QGraphicsTransform> &qtdecl_QGraphicsTransform () { return decl_QGraphicsTransform; }

}


class QGraphicsTransform_Adaptor : public QGraphicsTransform, public qt_gsi::QtObjectBase
{
public:

  virtual ~QGraphicsTransform_Adaptor();

  //  [adaptor ctor] QGraphicsTransform::QGraphicsTransform(QObject *parent)
  QGraphicsTransform_Adaptor() : QGraphicsTransform()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QGraphicsTransform::QGraphicsTransform(QObject *parent)
  QGraphicsTransform_Adaptor(QObject *parent) : QGraphicsTransform(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] int QGraphicsTransform::receivers(const char *signal)
  int fp_QGraphicsTransform_receivers_c1731 (const char *signal) const {
    return QGraphicsTransform::receivers(signal);
  }

  //  [expose] QObject *QGraphicsTransform::sender()
  QObject * fp_QGraphicsTransform_sender_c0 () const {
    return QGraphicsTransform::sender();
  }

  //  [expose] void QGraphicsTransform::update()
  void fp_QGraphicsTransform_update_0 () {
    QGraphicsTransform::update();
  }

  //  [adaptor impl] void QGraphicsTransform::applyTo(QMatrix4x4 *matrix)
  void cbs_applyTo_c1556_0(QMatrix4x4 *matrix) const
  {
    __SUPPRESS_UNUSED_WARNING (matrix);
    throw qt_gsi::AbstractMethodCalledException("applyTo");
  }

  virtual void applyTo(QMatrix4x4 *matrix) const
  {
    if (cb_applyTo_c1556_0.can_issue()) {
      cb_applyTo_c1556_0.issue<QGraphicsTransform_Adaptor, QMatrix4x4 *>(&QGraphicsTransform_Adaptor::cbs_applyTo_c1556_0, matrix);
    } else {
      throw qt_gsi::AbstractMethodCalledException("applyTo");
    }
  }

  //  [adaptor impl] bool QGraphicsTransform::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QGraphicsTransform::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QGraphicsTransform_Adaptor, bool, QEvent *>(&QGraphicsTransform_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QGraphicsTransform::event(arg1);
    }
  }

  //  [adaptor impl] bool QGraphicsTransform::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QGraphicsTransform::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QGraphicsTransform_Adaptor, bool, QObject *, QEvent *>(&QGraphicsTransform_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QGraphicsTransform::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QGraphicsTransform::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QGraphicsTransform::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QGraphicsTransform_Adaptor, QChildEvent *>(&QGraphicsTransform_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QGraphicsTransform::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QGraphicsTransform::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QGraphicsTransform::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QGraphicsTransform_Adaptor, QEvent *>(&QGraphicsTransform_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QGraphicsTransform::customEvent(arg1);
    }
  }

  //  [emitter impl] void QGraphicsTransform::destroyed(QObject *)
  void emitter_QGraphicsTransform_destroyed_1302(QObject *arg1)
  {
    emit QGraphicsTransform::destroyed(arg1);
  }

  //  [adaptor impl] void QGraphicsTransform::disconnectNotify(const char *signal)
  void cbs_disconnectNotify_1731_0(const char *signal)
  {
    QGraphicsTransform::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const char *signal)
  {
    if (cb_disconnectNotify_1731_0.can_issue()) {
      cb_disconnectNotify_1731_0.issue<QGraphicsTransform_Adaptor, const char *>(&QGraphicsTransform_Adaptor::cbs_disconnectNotify_1731_0, signal);
    } else {
      QGraphicsTransform::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QGraphicsTransform::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QGraphicsTransform::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QGraphicsTransform_Adaptor, QTimerEvent *>(&QGraphicsTransform_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QGraphicsTransform::timerEvent(arg1);
    }
  }

  gsi::Callback cb_applyTo_c1556_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_1731_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QGraphicsTransform_Adaptor::~QGraphicsTransform_Adaptor() { }

//  Constructor QGraphicsTransform::QGraphicsTransform(QObject *parent) (adaptor class)

static void _init_ctor_QGraphicsTransform_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QGraphicsTransform_Adaptor> ();
}

static void _call_ctor_QGraphicsTransform_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QGraphicsTransform_Adaptor *> (new QGraphicsTransform_Adaptor (arg1));
}


// void QGraphicsTransform::applyTo(QMatrix4x4 *matrix)

static void _init_cbs_applyTo_c1556_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("matrix");
  decl->add_arg<QMatrix4x4 * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_applyTo_c1556_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMatrix4x4 *arg1 = args.read<QMatrix4x4 * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsTransform_Adaptor *)cls)->cbs_applyTo_c1556_0 (arg1);
}

static void _set_callback_cbs_applyTo_c1556_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsTransform_Adaptor *)cls)->cb_applyTo_c1556_0 = cb;
}


// void QGraphicsTransform::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsTransform_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsTransform_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QGraphicsTransform::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsTransform_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsTransform_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QGraphicsTransform::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ((QGraphicsTransform_Adaptor *)cls)->emitter_QGraphicsTransform_destroyed_1302 (arg1);
}


// void QGraphicsTransform::disconnectNotify(const char *signal)

static void _init_cbs_disconnectNotify_1731_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_1731_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsTransform_Adaptor *)cls)->cbs_disconnectNotify_1731_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsTransform_Adaptor *)cls)->cb_disconnectNotify_1731_0 = cb;
}


// bool QGraphicsTransform::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QGraphicsTransform_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsTransform_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QGraphicsTransform::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QGraphicsTransform_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsTransform_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed int QGraphicsTransform::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QGraphicsTransform_Adaptor *)cls)->fp_QGraphicsTransform_receivers_c1731 (arg1));
}


// exposed QObject *QGraphicsTransform::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QGraphicsTransform_Adaptor *)cls)->fp_QGraphicsTransform_sender_c0 ());
}


// void QGraphicsTransform::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsTransform_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsTransform_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


// exposed void QGraphicsTransform::update()

static void _init_fp_update_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_fp_update_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsTransform_Adaptor *)cls)->fp_QGraphicsTransform_update_0 ();
}


namespace gsi
{

gsi::Class<QGraphicsTransform> &qtdecl_QGraphicsTransform ();

static gsi::Methods methods_QGraphicsTransform_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGraphicsTransform::QGraphicsTransform(QObject *parent)\nThis method creates an object of class QGraphicsTransform.", &_init_ctor_QGraphicsTransform_Adaptor_1302, &_call_ctor_QGraphicsTransform_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("applyTo", "@hide", true, &_init_cbs_applyTo_c1556_0, &_call_cbs_applyTo_c1556_0);
  methods += new qt_gsi::GenericMethod ("applyTo", "@brief Virtual method void QGraphicsTransform::applyTo(QMatrix4x4 *matrix)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_applyTo_c1556_0, &_call_cbs_applyTo_c1556_0, &_set_callback_cbs_applyTo_c1556_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QGraphicsTransform::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QGraphicsTransform::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QGraphicsTransform::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QGraphicsTransform::disconnectNotify(const char *signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0, &_set_callback_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QGraphicsTransform::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QGraphicsTransform::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QGraphicsTransform::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QGraphicsTransform::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QGraphicsTransform::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*update", "@brief Method void QGraphicsTransform::update()\nThis method is protected and can only be called from inside a derived class.", false, &_init_fp_update_0, &_call_fp_update_0);
  return methods;
}

gsi::Class<QGraphicsTransform_Adaptor> decl_QGraphicsTransform_Adaptor (qtdecl_QGraphicsTransform (), "QtGui", "QGraphicsTransform",
  methods_QGraphicsTransform_Adaptor (),
  "@qt\n@brief Binding of QGraphicsTransform");

}

