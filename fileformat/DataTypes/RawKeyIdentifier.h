#ifndef RAWKEYIDENTIFIER_H
#define RAWKEYIDENTIFIER_H


/** \file 
\brief auto-generated file for RawKeyIdentifier

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/BcdMonthYear.h"
#include "../DataTypes/RawData.h"
#include "DataType.h"

class RawKeyIdentifier : public DataType {
	Q_DECLARE_TR_FUNCTIONS(KeyIdentifier)
public:
	
	RawData certificateRequestSerialNumber;
	BcdMonthYear date;
	int type;
	int manufacturerCode;

	RawKeyIdentifier(const DataPointer& filewalker);
	///returns "RawKeyIdentifier"
QString className() const;
	int size() const;
	static const int staticSize = 8;
	virtual void printOn(Reporter& report) const;
};


#endif
