#ifndef VUTIMEADJUSTMENTRECORD_H
#define VUTIMEADJUSTMENTRECORD_H


/** \file 
\brief auto-generated file for VuTimeAdjustmentRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/FullCardNumber.h"
#include "../DataTypes/TimeReal.h"
#include "DataType.h"

class VuTimeAdjustmentRecord : public DataType {
	Q_DECLARE_TR_FUNCTIONS(VuTimeAdjustmentRecord)
public:
	
	TimeReal oldTimeValue;
	TimeReal newTimeValue;
	QString workshopName;
	QString workshopAddress;
	FullCardNumber workshopCardNumber;

	VuTimeAdjustmentRecord(const DataPointer& filewalker);
	///returns "VuTimeAdjustmentRecord"
QString className() const;
	int size() const;
	static const int staticSize = 98;
	virtual void printOn(Reporter& report) const;
};


#endif
