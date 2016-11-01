#ifndef SPECIFICCONDITIONRECORD_H
#define SPECIFICCONDITIONRECORD_H


/** \file 
\brief auto-generated file for SpecificConditionRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/TimeReal.h"
#include "DataType.h"

class SpecificConditionRecord : public DataType {
	Q_DECLARE_TR_FUNCTIONS(SpecificConditionRecord)
public:
	
	TimeReal entryTime;
	int specificConditionType;

	SpecificConditionRecord(const DataPointer& filewalker);
	///returns "SpecificConditionRecord"
QString className() const;
	int size() const;
	static const int staticSize = 5;
	virtual void printOn(Reporter& report) const;
};


#endif
