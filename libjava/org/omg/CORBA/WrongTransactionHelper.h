
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_WrongTransactionHelper__
#define __org_omg_CORBA_WrongTransactionHelper__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class TypeCode;
          class WrongTransaction;
          class WrongTransactionHelper;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
    }
  }
}

class org::omg::CORBA::WrongTransactionHelper : public ::java::lang::Object
{

public:
  WrongTransactionHelper();
  static ::org::omg::CORBA::TypeCode * type();
  static void insert(::org::omg::CORBA::Any *, ::org::omg::CORBA::WrongTransaction *);
  static ::org::omg::CORBA::WrongTransaction * extract(::org::omg::CORBA::Any *);
  static ::java::lang::String * id();
  static ::org::omg::CORBA::WrongTransaction * read(::org::omg::CORBA::portable::InputStream *);
  static void write(::org::omg::CORBA::portable::OutputStream *, ::org::omg::CORBA::WrongTransaction *);
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_WrongTransactionHelper__
