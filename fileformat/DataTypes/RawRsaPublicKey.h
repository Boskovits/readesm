#ifndef RAWRSAPUBLICKEY_H
#define RAWRSAPUBLICKEY_H


/** \file 
\brief auto-generated file for RawRsaPublicKey

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/LargeNumber.h"
#include "DataType.h"

class RawRsaPublicKey : public DataType {
	Q_DECLARE_TR_FUNCTIONS(RsaPublicKey)
public:
	
	LargeNumber n;
	LargeNumber e;

	RawRsaPublicKey(const DataPointer& filewalker);
	///returns "RawRsaPublicKey"
QString className() const;
	int size() const;
	static const int staticSize = 136;
	virtual void printOn(Reporter& report) const;
};


#endif
