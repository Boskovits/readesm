#ifndef VUEVENTRECORD_H
#define VUEVENTRECORD_H


/** \file 
\brief auto-generated file for VuEventRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/CardSlots.h"
#include "../DataTypes/Timespan.h"
#include "DataType.h"

class VuEventRecord : public DataType {
	Q_DECLARE_TR_FUNCTIONS(VuEventRecord)
public:
	
	int eventType;
	int eventRecordPurpose;
	Timespan eventTime;
	CardSlots cardSlots;
	int similarEventsNumber;

	VuEventRecord(const DataPointer& filewalker);
	///returns "VuEventRecord"
QString className() const;
	int size() const;
	static const int staticSize = 83;
	virtual void printOn(Reporter& report) const;
};


#endif
