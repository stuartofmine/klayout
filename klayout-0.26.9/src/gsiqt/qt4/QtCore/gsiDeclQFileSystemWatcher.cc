
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
*  @file gsiDeclQFileSystemWatcher.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QFileSystemWatcher>
#include <QChildEvent>
#include <QEvent>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QFileSystemWatcher

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QFileSystemWatcher::staticMetaObject);
}


// void QFileSystemWatcher::addPath(const QString &file)


static void _init_f_addPath_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("file");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_addPath_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFileSystemWatcher *)cls)->addPath (arg1);
}


// void QFileSystemWatcher::addPaths(const QStringList &files)


static void _init_f_addPaths_2437 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("files");
  decl->add_arg<const QStringList & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_addPaths_2437 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringList &arg1 = gsi::arg_reader<const QStringList & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFileSystemWatcher *)cls)->addPaths (arg1);
}


// QStringList QFileSystemWatcher::directories()


static void _init_f_directories_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_directories_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QFileSystemWatcher *)cls)->directories ());
}


// QStringList QFileSystemWatcher::files()


static void _init_f_files_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_files_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QFileSystemWatcher *)cls)->files ());
}


// void QFileSystemWatcher::removePath(const QString &file)


static void _init_f_removePath_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("file");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_removePath_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFileSystemWatcher *)cls)->removePath (arg1);
}


// void QFileSystemWatcher::removePaths(const QStringList &files)


static void _init_f_removePaths_2437 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("files");
  decl->add_arg<const QStringList & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_removePaths_2437 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringList &arg1 = gsi::arg_reader<const QStringList & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFileSystemWatcher *)cls)->removePaths (arg1);
}


// static QString QFileSystemWatcher::tr(const char *s, const char *c)


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
  ret.write<QString > ((QString)QFileSystemWatcher::tr (arg1, arg2));
}


// static QString QFileSystemWatcher::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QFileSystemWatcher::tr (arg1, arg2, arg3));
}


// static QString QFileSystemWatcher::trUtf8(const char *s, const char *c)


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
  ret.write<QString > ((QString)QFileSystemWatcher::trUtf8 (arg1, arg2));
}


// static QString QFileSystemWatcher::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QFileSystemWatcher::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QFileSystemWatcher () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("addPath", "@brief Method void QFileSystemWatcher::addPath(const QString &file)\n", false, &_init_f_addPath_2025, &_call_f_addPath_2025);
  methods += new qt_gsi::GenericMethod ("addPaths", "@brief Method void QFileSystemWatcher::addPaths(const QStringList &files)\n", false, &_init_f_addPaths_2437, &_call_f_addPaths_2437);
  methods += new qt_gsi::GenericMethod ("directories", "@brief Method QStringList QFileSystemWatcher::directories()\n", true, &_init_f_directories_c0, &_call_f_directories_c0);
  methods += new qt_gsi::GenericMethod ("files", "@brief Method QStringList QFileSystemWatcher::files()\n", true, &_init_f_files_c0, &_call_f_files_c0);
  methods += new qt_gsi::GenericMethod ("removePath", "@brief Method void QFileSystemWatcher::removePath(const QString &file)\n", false, &_init_f_removePath_2025, &_call_f_removePath_2025);
  methods += new qt_gsi::GenericMethod ("removePaths", "@brief Method void QFileSystemWatcher::removePaths(const QStringList &files)\n", false, &_init_f_removePaths_2437, &_call_f_removePaths_2437);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QFileSystemWatcher::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("directoryChanged(const QString &)", "directoryChanged", gsi::arg("path"), "@brief Signal declaration for QFileSystemWatcher::directoryChanged(const QString &path)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("fileChanged(const QString &)", "fileChanged", gsi::arg("path"), "@brief Signal declaration for QFileSystemWatcher::fileChanged(const QString &path)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QFileSystemWatcher::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QFileSystemWatcher::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QFileSystemWatcher::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QFileSystemWatcher::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QFileSystemWatcher> decl_QFileSystemWatcher (qtdecl_QObject (), "QtCore", "QFileSystemWatcher_Native",
  methods_QFileSystemWatcher (),
  "@hide\n@alias QFileSystemWatcher");

GSI_QTCORE_PUBLIC gsi::Class<QFileSystemWatcher> &qtdecl_QFileSystemWatcher () { return decl_QFileSystemWatcher; }

}


class QFileSystemWatcher_Adaptor : public QFileSystemWatcher, public qt_gsi::QtObjectBase
{
public:

  virtual ~QFileSystemWatcher_Adaptor();

  //  [adaptor ctor] QFileSystemWatcher::QFileSystemWatcher(QObject *parent)
  QFileSystemWatcher_Adaptor() : QFileSystemWatcher()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QFileSystemWatcher::QFileSystemWatcher(QObject *parent)
  QFileSystemWatcher_Adaptor(QObject *parent) : QFileSystemWatcher(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QFileSystemWatcher::QFileSystemWatcher(const QStringList &paths, QObject *parent)
  QFileSystemWatcher_Adaptor(const QStringList &paths) : QFileSystemWatcher(paths)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QFileSystemWatcher::QFileSystemWatcher(const QStringList &paths, QObject *parent)
  QFileSystemWatcher_Adaptor(const QStringList &paths, QObject *parent) : QFileSystemWatcher(paths, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] int QFileSystemWatcher::receivers(const char *signal)
  int fp_QFileSystemWatcher_receivers_c1731 (const char *signal) const {
    return QFileSystemWatcher::receivers(signal);
  }

  //  [expose] QObject *QFileSystemWatcher::sender()
  QObject * fp_QFileSystemWatcher_sender_c0 () const {
    return QFileSystemWatcher::sender();
  }

  //  [adaptor impl] bool QFileSystemWatcher::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QFileSystemWatcher::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QFileSystemWatcher_Adaptor, bool, QEvent *>(&QFileSystemWatcher_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QFileSystemWatcher::event(arg1);
    }
  }

  //  [adaptor impl] bool QFileSystemWatcher::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QFileSystemWatcher::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QFileSystemWatcher_Adaptor, bool, QObject *, QEvent *>(&QFileSystemWatcher_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QFileSystemWatcher::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QFileSystemWatcher::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QFileSystemWatcher::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QFileSystemWatcher_Adaptor, QChildEvent *>(&QFileSystemWatcher_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QFileSystemWatcher::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QFileSystemWatcher::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QFileSystemWatcher::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QFileSystemWatcher_Adaptor, QEvent *>(&QFileSystemWatcher_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QFileSystemWatcher::customEvent(arg1);
    }
  }

  //  [emitter impl] void QFileSystemWatcher::destroyed(QObject *)
  void emitter_QFileSystemWatcher_destroyed_1302(QObject *arg1)
  {
    emit QFileSystemWatcher::destroyed(arg1);
  }

  //  [emitter impl] void QFileSystemWatcher::directoryChanged(const QString &path)
  void emitter_QFileSystemWatcher_directoryChanged_2025(const QString &path)
  {
    emit QFileSystemWatcher::directoryChanged(path);
  }

  //  [adaptor impl] void QFileSystemWatcher::disconnectNotify(const char *signal)
  void cbs_disconnectNotify_1731_0(const char *signal)
  {
    QFileSystemWatcher::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const char *signal)
  {
    if (cb_disconnectNotify_1731_0.can_issue()) {
      cb_disconnectNotify_1731_0.issue<QFileSystemWatcher_Adaptor, const char *>(&QFileSystemWatcher_Adaptor::cbs_disconnectNotify_1731_0, signal);
    } else {
      QFileSystemWatcher::disconnectNotify(signal);
    }
  }

  //  [emitter impl] void QFileSystemWatcher::fileChanged(const QString &path)
  void emitter_QFileSystemWatcher_fileChanged_2025(const QString &path)
  {
    emit QFileSystemWatcher::fileChanged(path);
  }

  //  [adaptor impl] void QFileSystemWatcher::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QFileSystemWatcher::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QFileSystemWatcher_Adaptor, QTimerEvent *>(&QFileSystemWatcher_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QFileSystemWatcher::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_1731_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QFileSystemWatcher_Adaptor::~QFileSystemWatcher_Adaptor() { }

//  Constructor QFileSystemWatcher::QFileSystemWatcher(QObject *parent) (adaptor class)

static void _init_ctor_QFileSystemWatcher_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QFileSystemWatcher_Adaptor> ();
}

static void _call_ctor_QFileSystemWatcher_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QFileSystemWatcher_Adaptor *> (new QFileSystemWatcher_Adaptor (arg1));
}


//  Constructor QFileSystemWatcher::QFileSystemWatcher(const QStringList &paths, QObject *parent) (adaptor class)

static void _init_ctor_QFileSystemWatcher_Adaptor_3631 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("paths");
  decl->add_arg<const QStringList & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return_new<QFileSystemWatcher_Adaptor> ();
}

static void _call_ctor_QFileSystemWatcher_Adaptor_3631 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringList &arg1 = gsi::arg_reader<const QStringList & >() (args, heap);
  QObject *arg2 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QFileSystemWatcher_Adaptor *> (new QFileSystemWatcher_Adaptor (arg1, arg2));
}


// void QFileSystemWatcher::childEvent(QChildEvent *)

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
  ((QFileSystemWatcher_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileSystemWatcher_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QFileSystemWatcher::customEvent(QEvent *)

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
  ((QFileSystemWatcher_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileSystemWatcher_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QFileSystemWatcher::destroyed(QObject *)

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
  ((QFileSystemWatcher_Adaptor *)cls)->emitter_QFileSystemWatcher_destroyed_1302 (arg1);
}


// emitter void QFileSystemWatcher::directoryChanged(const QString &path)

static void _init_emitter_directoryChanged_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("path");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_directoryChanged_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ((QFileSystemWatcher_Adaptor *)cls)->emitter_QFileSystemWatcher_directoryChanged_2025 (arg1);
}


// void QFileSystemWatcher::disconnectNotify(const char *signal)

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
  ((QFileSystemWatcher_Adaptor *)cls)->cbs_disconnectNotify_1731_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileSystemWatcher_Adaptor *)cls)->cb_disconnectNotify_1731_0 = cb;
}


// bool QFileSystemWatcher::event(QEvent *)

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
  ret.write<bool > ((bool)((QFileSystemWatcher_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileSystemWatcher_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QFileSystemWatcher::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QFileSystemWatcher_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileSystemWatcher_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// emitter void QFileSystemWatcher::fileChanged(const QString &path)

static void _init_emitter_fileChanged_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("path");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_fileChanged_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ((QFileSystemWatcher_Adaptor *)cls)->emitter_QFileSystemWatcher_fileChanged_2025 (arg1);
}


// exposed int QFileSystemWatcher::receivers(const char *signal)

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
  ret.write<int > ((int)((QFileSystemWatcher_Adaptor *)cls)->fp_QFileSystemWatcher_receivers_c1731 (arg1));
}


// exposed QObject *QFileSystemWatcher::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QFileSystemWatcher_Adaptor *)cls)->fp_QFileSystemWatcher_sender_c0 ());
}


// void QFileSystemWatcher::timerEvent(QTimerEvent *)

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
  ((QFileSystemWatcher_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QFileSystemWatcher_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QFileSystemWatcher> &qtdecl_QFileSystemWatcher ();

static gsi::Methods methods_QFileSystemWatcher_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFileSystemWatcher::QFileSystemWatcher(QObject *parent)\nThis method creates an object of class QFileSystemWatcher.", &_init_ctor_QFileSystemWatcher_Adaptor_1302, &_call_ctor_QFileSystemWatcher_Adaptor_1302);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFileSystemWatcher::QFileSystemWatcher(const QStringList &paths, QObject *parent)\nThis method creates an object of class QFileSystemWatcher.", &_init_ctor_QFileSystemWatcher_Adaptor_3631, &_call_ctor_QFileSystemWatcher_Adaptor_3631);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QFileSystemWatcher::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QFileSystemWatcher::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QFileSystemWatcher::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("emit_directoryChanged", "@brief Emitter for signal void QFileSystemWatcher::directoryChanged(const QString &path)\nCall this method to emit this signal.", false, &_init_emitter_directoryChanged_2025, &_call_emitter_directoryChanged_2025);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QFileSystemWatcher::disconnectNotify(const char *signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0, &_set_callback_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QFileSystemWatcher::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QFileSystemWatcher::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("emit_fileChanged", "@brief Emitter for signal void QFileSystemWatcher::fileChanged(const QString &path)\nCall this method to emit this signal.", false, &_init_emitter_fileChanged_2025, &_call_emitter_fileChanged_2025);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QFileSystemWatcher::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QFileSystemWatcher::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QFileSystemWatcher::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QFileSystemWatcher_Adaptor> decl_QFileSystemWatcher_Adaptor (qtdecl_QFileSystemWatcher (), "QtCore", "QFileSystemWatcher",
  methods_QFileSystemWatcher_Adaptor (),
  "@qt\n@brief Binding of QFileSystemWatcher");

}

