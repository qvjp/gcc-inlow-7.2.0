
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_TRANSACTION_UNAVAILABLE__
#define __org_omg_CORBA_TRANSACTION_UNAVAILABLE__

#pragma interface

#include <org/omg/CORBA/SystemException.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class CompletionStatus;
          class TRANSACTION_UNAVAILABLE;
      }
    }
  }
}

class org::omg::CORBA::TRANSACTION_UNAVAILABLE : public ::org::omg::CORBA::SystemException
{

public:
  TRANSACTION_UNAVAILABLE(::java::lang::String *);
  TRANSACTION_UNAVAILABLE();
  TRANSACTION_UNAVAILABLE(jint, ::org::omg::CORBA::CompletionStatus *);
  TRANSACTION_UNAVAILABLE(::java::lang::String *, jint, ::org::omg::CORBA::CompletionStatus *);
private:
  static const jlong serialVersionUID = 6340246200933309385LL;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_TRANSACTION_UNAVAILABLE__
