#ifndef CERTIFICATEHOLDERAUTHORIZATION_H
#define CERTIFICATEHOLDERAUTHORIZATION_H


/** \file 
\brief auto-generated file for CertificateHolderAuthorization

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/RawData.h"
#include "DataType.h"

class CertificateHolderAuthorization : public DataType {
	Q_DECLARE_TR_FUNCTIONS(CertificateHolderAuthorization)
public:
	
	RawData tachographApplicationId;
	int equipmentType;

	CertificateHolderAuthorization(const DataPointer& filewalker);
	///returns "CertificateHolderAuthorization"
QString className() const;
	int size() const;
	static const int staticSize = 7;
	virtual void printOn(Reporter& report) const;
};


#endif
