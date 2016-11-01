#ifndef VUCOMPANYLOCKSRECORD_H
#define VUCOMPANYLOCKSRECORD_H


/** \file 
\brief auto-generated file for VuCompanyLocksRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/FullCardNumber.h"
#include "../DataTypes/Timespan.h"
#include "DataType.h"

class VuCompanyLocksRecord : public DataType {
	Q_DECLARE_TR_FUNCTIONS(VuCompanyLocksRecord)
public:
	
	Timespan lockTime;
	QString companyName;
	QString companyAddress;
	FullCardNumber companyCardNumber;

	VuCompanyLocksRecord(const DataPointer& filewalker);
	///returns "VuCompanyLocksRecord"
QString className() const;
	int size() const;
	static const int staticSize = 98;
	virtual void printOn(Reporter& report) const;
};


#endif
