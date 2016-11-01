#ifndef RAWENCRYPTEDCERTIFICATE_H
#define RAWENCRYPTEDCERTIFICATE_H


/** \file 
\brief auto-generated file for RawEncryptedCertificate

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/CertificateAuthority.h"
#include "../DataTypes/RawData.h"
#include "DataType.h"

class RawEncryptedCertificate : public DataType {
	Q_DECLARE_TR_FUNCTIONS(EncryptedCertificate)
public:
	
	RawData sign;
	RawData cndash;
	CertificateAuthority certificateAuthorityReference;

	RawEncryptedCertificate(const DataPointer& filewalker);
	///returns "RawEncryptedCertificate"
QString className() const;
	int size() const;
	static const int staticSize = 194;
	virtual void printOn(Reporter& report) const;
};


#endif
