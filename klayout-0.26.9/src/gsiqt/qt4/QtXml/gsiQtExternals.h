
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

/*
  External declarations for for Qt bindings

  DO NOT EDIT THIS FILE. 
  This file has been created automatically
*/

#if !defined(HDR_gsiQtXmlExternals)
#define HDR_gsiQtXmlExternals

#include "gsiClass.h"
#include "gsiQtXmlCommon.h"

class QDomAttr;

namespace tl { template <> struct type_traits<QDomAttr> : public type_traits<void> {
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QDomAttr> &qtdecl_QDomAttr (); }

class QDomCDATASection;

namespace tl { template <> struct type_traits<QDomCDATASection> : public type_traits<void> {
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QDomCDATASection> &qtdecl_QDomCDATASection (); }

class QDomCharacterData;

namespace tl { template <> struct type_traits<QDomCharacterData> : public type_traits<void> {
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QDomCharacterData> &qtdecl_QDomCharacterData (); }

class QDomComment;

namespace tl { template <> struct type_traits<QDomComment> : public type_traits<void> {
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QDomComment> &qtdecl_QDomComment (); }

class QDomDocument;

namespace tl { template <> struct type_traits<QDomDocument> : public type_traits<void> {
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QDomDocument> &qtdecl_QDomDocument (); }

class QDomDocumentFragment;

namespace tl { template <> struct type_traits<QDomDocumentFragment> : public type_traits<void> {
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QDomDocumentFragment> &qtdecl_QDomDocumentFragment (); }

class QDomDocumentType;

namespace tl { template <> struct type_traits<QDomDocumentType> : public type_traits<void> {
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QDomDocumentType> &qtdecl_QDomDocumentType (); }

class QDomElement;

namespace tl { template <> struct type_traits<QDomElement> : public type_traits<void> {
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QDomElement> &qtdecl_QDomElement (); }

class QDomEntity;

namespace tl { template <> struct type_traits<QDomEntity> : public type_traits<void> {
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QDomEntity> &qtdecl_QDomEntity (); }

class QDomEntityReference;

namespace tl { template <> struct type_traits<QDomEntityReference> : public type_traits<void> {
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QDomEntityReference> &qtdecl_QDomEntityReference (); }

class QDomImplementation;

namespace tl { template <> struct type_traits<QDomImplementation> : public type_traits<void> {
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QDomImplementation> &qtdecl_QDomImplementation (); }

class QDomNamedNodeMap;

namespace tl { template <> struct type_traits<QDomNamedNodeMap> : public type_traits<void> {
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QDomNamedNodeMap> &qtdecl_QDomNamedNodeMap (); }

class QDomNode;

namespace tl { template <> struct type_traits<QDomNode> : public type_traits<void> {
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QDomNode> &qtdecl_QDomNode (); }

class QDomNodeList;

namespace tl { template <> struct type_traits<QDomNodeList> : public type_traits<void> {
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QDomNodeList> &qtdecl_QDomNodeList (); }

class QDomNotation;

namespace tl { template <> struct type_traits<QDomNotation> : public type_traits<void> {
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QDomNotation> &qtdecl_QDomNotation (); }

class QDomProcessingInstruction;

namespace tl { template <> struct type_traits<QDomProcessingInstruction> : public type_traits<void> {
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QDomProcessingInstruction> &qtdecl_QDomProcessingInstruction (); }

class QDomText;

namespace tl { template <> struct type_traits<QDomText> : public type_traits<void> {
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QDomText> &qtdecl_QDomText (); }

class QXmlAttributes;

namespace tl { template <> struct type_traits<QXmlAttributes> : public type_traits<void> {
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QXmlAttributes> &qtdecl_QXmlAttributes (); }

class QXmlContentHandler;

namespace tl { template <> struct type_traits<QXmlContentHandler> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QXmlContentHandler> &qtdecl_QXmlContentHandler (); }

class QXmlDTDHandler;

namespace tl { template <> struct type_traits<QXmlDTDHandler> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QXmlDTDHandler> &qtdecl_QXmlDTDHandler (); }

class QXmlDeclHandler;

namespace tl { template <> struct type_traits<QXmlDeclHandler> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QXmlDeclHandler> &qtdecl_QXmlDeclHandler (); }

class QXmlDefaultHandler;

namespace tl { template <> struct type_traits<QXmlDefaultHandler> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QXmlDefaultHandler> &qtdecl_QXmlDefaultHandler (); }

class QXmlEntityResolver;

namespace tl { template <> struct type_traits<QXmlEntityResolver> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QXmlEntityResolver> &qtdecl_QXmlEntityResolver (); }

class QXmlErrorHandler;

namespace tl { template <> struct type_traits<QXmlErrorHandler> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QXmlErrorHandler> &qtdecl_QXmlErrorHandler (); }

class QXmlInputSource;

namespace tl { template <> struct type_traits<QXmlInputSource> : public type_traits<void> {
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QXmlInputSource> &qtdecl_QXmlInputSource (); }

class QXmlLexicalHandler;

namespace tl { template <> struct type_traits<QXmlLexicalHandler> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QXmlLexicalHandler> &qtdecl_QXmlLexicalHandler (); }

class QXmlLocator;

namespace tl { template <> struct type_traits<QXmlLocator> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QXmlLocator> &qtdecl_QXmlLocator (); }

class QXmlNamespaceSupport;

namespace tl { template <> struct type_traits<QXmlNamespaceSupport> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QXmlNamespaceSupport> &qtdecl_QXmlNamespaceSupport (); }

class QXmlParseException;

namespace tl { template <> struct type_traits<QXmlParseException> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QXmlParseException> &qtdecl_QXmlParseException (); }

class QXmlReader;

namespace tl { template <> struct type_traits<QXmlReader> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QXmlReader> &qtdecl_QXmlReader (); }

class QXmlSimpleReader;

namespace tl { template <> struct type_traits<QXmlSimpleReader> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTXML_PUBLIC gsi::Class<QXmlSimpleReader> &qtdecl_QXmlSimpleReader (); }


#define QT_EXTERNAL_BASE(X) gsi::qtdecl_##X(),

#endif

