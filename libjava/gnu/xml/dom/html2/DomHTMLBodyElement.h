
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_dom_html2_DomHTMLBodyElement__
#define __gnu_xml_dom_html2_DomHTMLBodyElement__

#pragma interface

#include <gnu/xml/dom/html2/DomHTMLElement.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace dom
      {
        namespace html2
        {
            class DomHTMLBodyElement;
            class DomHTMLDocument;
        }
      }
    }
  }
}

class gnu::xml::dom::html2::DomHTMLBodyElement : public ::gnu::xml::dom::html2::DomHTMLElement
{

public: // actually protected
  DomHTMLBodyElement(::gnu::xml::dom::html2::DomHTMLDocument *, ::java::lang::String *, ::java::lang::String *);
public:
  virtual ::java::lang::String * getALink();
  virtual void setALink(::java::lang::String *);
  virtual ::java::lang::String * getBackground();
  virtual void setBackground(::java::lang::String *);
  virtual ::java::lang::String * getBgColor();
  virtual void setBgColor(::java::lang::String *);
  virtual ::java::lang::String * getLink();
  virtual void setLink(::java::lang::String *);
  virtual ::java::lang::String * getText();
  virtual void setText(::java::lang::String *);
  virtual ::java::lang::String * getVLink();
  virtual void setVLink(::java::lang::String *);
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_dom_html2_DomHTMLBodyElement__
