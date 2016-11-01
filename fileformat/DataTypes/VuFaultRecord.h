#ifndef VUFAULTRECORD_H
#define VUFAULTRECORD_H


/** \file 
\brief auto-generated file for VuFaultRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/CardSlots.h"
#include "../DataTypes/Timespan.h"
#include "DataType.h"

class VuFaultRecord : public DataType {
	Q_DECLARE_TR_FUNCTIONS(VuFaultRecord)
public:
	
	int eventType;
	int eventRecordPurpose;
	Timespan eventTime;
	CardSlots cardSlots;

	VuFaultRecord(const DataPointer& filewalker);
	///returns "VuFaultRecord"
QString className() const;
	int size() const;
	static const int staticSize = 82;
	virtual void printOn(Reporter& report) const;
};


#endif
