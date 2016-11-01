#ifndef VUCONTROLACTIVITYRECORD_H
#define VUCONTROLACTIVITYRECORD_H


/** \file 
\brief auto-generated file for VuControlActivityRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/FullCardNumber.h"
#include "../DataTypes/TimeReal.h"
#include "../DataTypes/Timespan.h"
#include "DataType.h"

class VuControlActivityRecord : public DataType {
	Q_DECLARE_TR_FUNCTIONS(VuControlActivityRecord)
public:
	
	int controlType;
	TimeReal controlTime;
	FullCardNumber controlCardNumber;
	Timespan downloadPeriod;

	VuControlActivityRecord(const DataPointer& filewalker);
	///returns "VuControlActivityRecord"
QString className() const;
	int size() const;
	static const int staticSize = 31;
	virtual void printOn(Reporter& report) const;
};


#endif
