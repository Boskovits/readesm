#ifndef CERTIFICATEAUTHORITY_H
#define CERTIFICATEAUTHORITY_H


/** \file 
\brief auto-generated file for CertificateAuthority

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/RawData.h"
#include "DataType.h"

class CertificateAuthority : public DataType {
	Q_DECLARE_TR_FUNCTIONS(CertificateAuthority)
public:
	
	int nationNumeric;
	QString nationAlpha;
	int keySerialNumber;
	RawData additionalInfo;
	int caIdentifer;

	CertificateAuthority(const DataPointer& filewalker);
	///returns "CertificateAuthority"
QString className() const;
	int size() const;
	static const int staticSize = 8;
	virtual void printOn(Reporter& report) const;
};


#endif
