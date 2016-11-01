#ifndef PLAINCERTIFICATE_H
#define PLAINCERTIFICATE_H


/** \file 
\brief auto-generated file for PlainCertificate

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/CertificateAuthority.h"
#include "../DataTypes/RsaPublicKey.h"
#include "DataType.h"

class PlainCertificate : public DataType {
	Q_DECLARE_TR_FUNCTIONS(PlainCertificate)
public:
	
	CertificateAuthority keyIdentifier;
	RsaPublicKey rsaPublicKey;

	PlainCertificate(const DataPointer& filewalker);
	///returns "PlainCertificate"
QString className() const;
	int size() const;
	static const int staticSize = 144;
	virtual void printOn(Reporter& report) const;
};


#endif
