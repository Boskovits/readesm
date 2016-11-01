#ifndef VUOVERSPEEDINGEVENTRECORD_H
#define VUOVERSPEEDINGEVENTRECORD_H


/** \file 
\brief auto-generated file for VuOverspeedingEventRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/FullCardNumber.h"
#include "../DataTypes/Timespan.h"
#include "DataType.h"

class VuOverspeedingEventRecord : public DataType {
	Q_DECLARE_TR_FUNCTIONS(VuOverspeedingEventRecord)
public:
	
	int eventType;
	int eventRecordPurpose;
	Timespan eventTime;
	int maxSpeedValue;
	int averageSpeedValue;
	FullCardNumber cardNumberDriverSlotBegin;
	int similarEventsNumber;

	VuOverspeedingEventRecord(const DataPointer& filewalker);
	///returns "VuOverspeedingEventRecord"
QString className() const;
	int size() const;
	static const int staticSize = 31;
	virtual void printOn(Reporter& report) const;
};


#endif
