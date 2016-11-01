#ifndef EXTENDEDSERIALNUMBER_H
#define EXTENDEDSERIALNUMBER_H


/** \file 
\brief auto-generated file for ExtendedSerialNumber

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/BcdMonthYear.h"
#include "DataType.h"

class ExtendedSerialNumber : public DataType {
	Q_DECLARE_TR_FUNCTIONS(ExtendedSerialNumber)
public:
	
	int serialNumber;
	BcdMonthYear date;
	int equipmentType;
	int manufacturerCode;

	ExtendedSerialNumber(const DataPointer& filewalker);
	///returns "ExtendedSerialNumber"
QString className() const;
	int size() const;
	static const int staticSize = 8;
	QString toString() const;
	virtual void printOn(Reporter& report) const;
};


#endif
