
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_cert_PKIXCertPathBuilderResult__
#define __java_security_cert_PKIXCertPathBuilderResult__

#pragma interface

#include <java/security/cert/PKIXCertPathValidatorResult.h>
extern "Java"
{
  namespace java
  {
    namespace security
    {
        class PublicKey;
      namespace cert
      {
          class CertPath;
          class PKIXCertPathBuilderResult;
          class PolicyNode;
          class TrustAnchor;
      }
    }
  }
}

class java::security::cert::PKIXCertPathBuilderResult : public ::java::security::cert::PKIXCertPathValidatorResult
{

public:
  PKIXCertPathBuilderResult(::java::security::cert::CertPath *, ::java::security::cert::TrustAnchor *, ::java::security::cert::PolicyNode *, ::java::security::PublicKey *);
  virtual ::java::security::cert::CertPath * getCertPath();
  virtual ::java::lang::String * toString();
private:
  ::java::security::cert::CertPath * __attribute__((aligned(__alignof__( ::java::security::cert::PKIXCertPathValidatorResult)))) certPath;
public:
  static ::java::lang::Class class$;
};

#endif // __java_security_cert_PKIXCertPathBuilderResult__
