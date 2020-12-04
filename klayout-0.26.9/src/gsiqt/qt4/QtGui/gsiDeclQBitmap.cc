
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
*  @file gsiDeclQBitmap.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QBitmap>
#include <QColor>
#include <QIODevice>
#include <QImage>
#include <QMatrix>
#include <QPaintEngine>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QSize>
#include <QTransform>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QBitmap

// void QBitmap::clear()


static void _init_f_clear_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clear_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QBitmap *)cls)->clear ();
}


// QBitmap &QBitmap::operator=(const QPixmap &)


static void _init_f_operator_eq__2017 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QPixmap & > (argspec_0);
  decl->set_return<QBitmap & > ();
}

static void _call_f_operator_eq__2017 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPixmap &arg1 = gsi::arg_reader<const QPixmap & >() (args, heap);
  ret.write<QBitmap & > ((QBitmap &)((QBitmap *)cls)->operator= (arg1));
}


// QBitmap QBitmap::transformed(const QMatrix &)


static void _init_f_transformed_c2023 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QMatrix & > (argspec_0);
  decl->set_return<QBitmap > ();
}

static void _call_f_transformed_c2023 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMatrix &arg1 = gsi::arg_reader<const QMatrix & >() (args, heap);
  ret.write<QBitmap > ((QBitmap)((QBitmap *)cls)->transformed (arg1));
}


// QBitmap QBitmap::transformed(const QTransform &matrix)


static void _init_f_transformed_c2350 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("matrix");
  decl->add_arg<const QTransform & > (argspec_0);
  decl->set_return<QBitmap > ();
}

static void _call_f_transformed_c2350 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTransform &arg1 = gsi::arg_reader<const QTransform & >() (args, heap);
  ret.write<QBitmap > ((QBitmap)((QBitmap *)cls)->transformed (arg1));
}


// static QBitmap QBitmap::fromData(const QSize &size, const unsigned char *bits, QImage::Format monoFormat)


static void _init_f_fromData_6058 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<const QSize & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("bits");
  decl->add_arg<const unsigned char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("monoFormat", true, "QImage::Format_MonoLSB");
  decl->add_arg<const qt_gsi::Converter<QImage::Format>::target_type & > (argspec_2);
  decl->set_return<QBitmap > ();
}

static void _call_f_fromData_6058 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  const unsigned char *arg2 = gsi::arg_reader<const unsigned char * >() (args, heap);
  const qt_gsi::Converter<QImage::Format>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<QImage::Format>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QImage::Format>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QImage::Format>(heap, QImage::Format_MonoLSB), heap);
  ret.write<QBitmap > ((QBitmap)QBitmap::fromData (arg1, arg2, qt_gsi::QtToCppAdaptor<QImage::Format>(arg3).cref()));
}


// static QBitmap QBitmap::fromImage(const QImage &image, QFlags<Qt::ImageConversionFlag> flags)


static void _init_f_fromImage_5137 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("image");
  decl->add_arg<const QImage & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("flags", true, "Qt::AutoColor");
  decl->add_arg<QFlags<Qt::ImageConversionFlag> > (argspec_1);
  decl->set_return<QBitmap > ();
}

static void _call_f_fromImage_5137 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImage &arg1 = gsi::arg_reader<const QImage & >() (args, heap);
  QFlags<Qt::ImageConversionFlag> arg2 = args ? gsi::arg_reader<QFlags<Qt::ImageConversionFlag> >() (args, heap) : gsi::arg_maker<QFlags<Qt::ImageConversionFlag> >() (Qt::AutoColor, heap);
  ret.write<QBitmap > ((QBitmap)QBitmap::fromImage (arg1, arg2));
}


namespace gsi
{

static gsi::Methods methods_QBitmap () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("clear", "@brief Method void QBitmap::clear()\n", false, &_init_f_clear_0, &_call_f_clear_0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QBitmap &QBitmap::operator=(const QPixmap &)\n", false, &_init_f_operator_eq__2017, &_call_f_operator_eq__2017);
  methods += new qt_gsi::GenericMethod ("transformed", "@brief Method QBitmap QBitmap::transformed(const QMatrix &)\n", true, &_init_f_transformed_c2023, &_call_f_transformed_c2023);
  methods += new qt_gsi::GenericMethod ("transformed", "@brief Method QBitmap QBitmap::transformed(const QTransform &matrix)\n", true, &_init_f_transformed_c2350, &_call_f_transformed_c2350);
  methods += new qt_gsi::GenericStaticMethod ("fromData", "@brief Static method QBitmap QBitmap::fromData(const QSize &size, const unsigned char *bits, QImage::Format monoFormat)\nThis method is static and can be called without an instance.", &_init_f_fromData_6058, &_call_f_fromData_6058);
  methods += new qt_gsi::GenericStaticMethod ("fromImage", "@brief Static method QBitmap QBitmap::fromImage(const QImage &image, QFlags<Qt::ImageConversionFlag> flags)\nThis method is static and can be called without an instance.", &_init_f_fromImage_5137, &_call_f_fromImage_5137);
  return methods;
}

gsi::Class<QPixmap> &qtdecl_QPixmap ();

gsi::Class<QBitmap> decl_QBitmap (qtdecl_QPixmap (), "QtGui", "QBitmap_Native",
  methods_QBitmap (),
  "@hide\n@alias QBitmap");

GSI_QTGUI_PUBLIC gsi::Class<QBitmap> &qtdecl_QBitmap () { return decl_QBitmap; }

}


class QBitmap_Adaptor : public QBitmap, public qt_gsi::QtObjectBase
{
public:

  virtual ~QBitmap_Adaptor();

  //  [adaptor ctor] QBitmap::QBitmap()
  QBitmap_Adaptor() : QBitmap()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QBitmap::QBitmap(const QPixmap &)
  QBitmap_Adaptor(const QPixmap &arg1) : QBitmap(arg1)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QBitmap::QBitmap(int w, int h)
  QBitmap_Adaptor(int w, int h) : QBitmap(w, h)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QBitmap::QBitmap(const QSize &)
  QBitmap_Adaptor(const QSize &arg1) : QBitmap(arg1)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QBitmap::QBitmap(const QString &fileName, const char *format)
  QBitmap_Adaptor(const QString &fileName) : QBitmap(fileName)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QBitmap::QBitmap(const QString &fileName, const char *format)
  QBitmap_Adaptor(const QString &fileName, const char *format) : QBitmap(fileName, format)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QPaintEngine *QBitmap::paintEngine()
  QPaintEngine * cbs_paintEngine_c0_0() const
  {
    return QBitmap::paintEngine();
  }

  virtual QPaintEngine * paintEngine() const
  {
    if (cb_paintEngine_c0_0.can_issue()) {
      return cb_paintEngine_c0_0.issue<QBitmap_Adaptor, QPaintEngine *>(&QBitmap_Adaptor::cbs_paintEngine_c0_0);
    } else {
      return QBitmap::paintEngine();
    }
  }

  //  [adaptor impl] int QBitmap::metric(QPaintDevice::PaintDeviceMetric)
  int cbs_metric_c3445_0(const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & arg1) const
  {
    return QBitmap::metric(qt_gsi::QtToCppAdaptor<QPaintDevice::PaintDeviceMetric>(arg1).cref());
  }

  virtual int metric(QPaintDevice::PaintDeviceMetric arg1) const
  {
    if (cb_metric_c3445_0.can_issue()) {
      return cb_metric_c3445_0.issue<QBitmap_Adaptor, int, const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type &>(&QBitmap_Adaptor::cbs_metric_c3445_0, qt_gsi::CppToQtAdaptor<QPaintDevice::PaintDeviceMetric>(arg1));
    } else {
      return QBitmap::metric(arg1);
    }
  }

  gsi::Callback cb_paintEngine_c0_0;
  gsi::Callback cb_metric_c3445_0;
};

QBitmap_Adaptor::~QBitmap_Adaptor() { }

//  Constructor QBitmap::QBitmap() (adaptor class)

static void _init_ctor_QBitmap_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QBitmap_Adaptor> ();
}

static void _call_ctor_QBitmap_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QBitmap_Adaptor *> (new QBitmap_Adaptor ());
}


//  Constructor QBitmap::QBitmap(const QPixmap &) (adaptor class)

static void _init_ctor_QBitmap_Adaptor_2017 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QPixmap & > (argspec_0);
  decl->set_return_new<QBitmap_Adaptor> ();
}

static void _call_ctor_QBitmap_Adaptor_2017 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPixmap &arg1 = gsi::arg_reader<const QPixmap & >() (args, heap);
  ret.write<QBitmap_Adaptor *> (new QBitmap_Adaptor (arg1));
}


//  Constructor QBitmap::QBitmap(int w, int h) (adaptor class)

static void _init_ctor_QBitmap_Adaptor_1426 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("w");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("h");
  decl->add_arg<int > (argspec_1);
  decl->set_return_new<QBitmap_Adaptor> ();
}

static void _call_ctor_QBitmap_Adaptor_1426 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<QBitmap_Adaptor *> (new QBitmap_Adaptor (arg1, arg2));
}


//  Constructor QBitmap::QBitmap(const QSize &) (adaptor class)

static void _init_ctor_QBitmap_Adaptor_1805 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QSize & > (argspec_0);
  decl->set_return_new<QBitmap_Adaptor> ();
}

static void _call_ctor_QBitmap_Adaptor_1805 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  ret.write<QBitmap_Adaptor *> (new QBitmap_Adaptor (arg1));
}


//  Constructor QBitmap::QBitmap(const QString &fileName, const char *format) (adaptor class)

static void _init_ctor_QBitmap_Adaptor_3648 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return_new<QBitmap_Adaptor> ();
}

static void _call_ctor_QBitmap_Adaptor_3648 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QBitmap_Adaptor *> (new QBitmap_Adaptor (arg1, arg2));
}


// int QBitmap::metric(QPaintDevice::PaintDeviceMetric)

static void _init_cbs_metric_c3445_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_cbs_metric_c3445_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & arg1 = args.read<const qt_gsi::Converter<QPaintDevice::PaintDeviceMetric>::target_type & > (heap);
  ret.write<int > ((int)((QBitmap_Adaptor *)cls)->cbs_metric_c3445_0 (arg1));
}

static void _set_callback_cbs_metric_c3445_0 (void *cls, const gsi::Callback &cb)
{
  ((QBitmap_Adaptor *)cls)->cb_metric_c3445_0 = cb;
}


// QPaintEngine *QBitmap::paintEngine()

static void _init_cbs_paintEngine_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPaintEngine * > ();
}

static void _call_cbs_paintEngine_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPaintEngine * > ((QPaintEngine *)((QBitmap_Adaptor *)cls)->cbs_paintEngine_c0_0 ());
}

static void _set_callback_cbs_paintEngine_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QBitmap_Adaptor *)cls)->cb_paintEngine_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QBitmap> &qtdecl_QBitmap ();

static gsi::Methods methods_QBitmap_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBitmap::QBitmap()\nThis method creates an object of class QBitmap.", &_init_ctor_QBitmap_Adaptor_0, &_call_ctor_QBitmap_Adaptor_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBitmap::QBitmap(const QPixmap &)\nThis method creates an object of class QBitmap.", &_init_ctor_QBitmap_Adaptor_2017, &_call_ctor_QBitmap_Adaptor_2017);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBitmap::QBitmap(int w, int h)\nThis method creates an object of class QBitmap.", &_init_ctor_QBitmap_Adaptor_1426, &_call_ctor_QBitmap_Adaptor_1426);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBitmap::QBitmap(const QSize &)\nThis method creates an object of class QBitmap.", &_init_ctor_QBitmap_Adaptor_1805, &_call_ctor_QBitmap_Adaptor_1805);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBitmap::QBitmap(const QString &fileName, const char *format)\nThis method creates an object of class QBitmap.", &_init_ctor_QBitmap_Adaptor_3648, &_call_ctor_QBitmap_Adaptor_3648);
  methods += new qt_gsi::GenericMethod ("*metric", "@hide", true, &_init_cbs_metric_c3445_0, &_call_cbs_metric_c3445_0);
  methods += new qt_gsi::GenericMethod ("*metric", "@brief Virtual method int QBitmap::metric(QPaintDevice::PaintDeviceMetric)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_metric_c3445_0, &_call_cbs_metric_c3445_0, &_set_callback_cbs_metric_c3445_0);
  methods += new qt_gsi::GenericMethod ("paintEngine", "@hide", true, &_init_cbs_paintEngine_c0_0, &_call_cbs_paintEngine_c0_0);
  methods += new qt_gsi::GenericMethod ("paintEngine", "@brief Virtual method QPaintEngine *QBitmap::paintEngine()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_paintEngine_c0_0, &_call_cbs_paintEngine_c0_0, &_set_callback_cbs_paintEngine_c0_0);
  return methods;
}

gsi::Class<QBitmap_Adaptor> decl_QBitmap_Adaptor (qtdecl_QBitmap (), "QtGui", "QBitmap",
  methods_QBitmap_Adaptor (),
  "@qt\n@brief Binding of QBitmap");

}

