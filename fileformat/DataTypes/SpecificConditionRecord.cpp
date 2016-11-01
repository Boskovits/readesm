#include "SpecificConditionRecord.h"


/** \file 
\brief auto-generated file for SpecificConditionRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../formatStrings.h"

SpecificConditionRecord::SpecificConditionRecord(const DataPointer& filewalker) : DataType(filewalker),
	entryTime(start + 0 ),
	specificConditionType(readBigEndianInt1(start + 4 ))
{}

QString SpecificConditionRecord::className() const {
	return "SpecificConditionRecord";
}

int SpecificConditionRecord::size() const{
	return 5 ;
}

void SpecificConditionRecord::printOn(Reporter& report) const {
	report.tagValuePair(tr("entryTime"), entryTime.toString());
	report.tagValuePair(tr("specificConditionType"), formatStrings::specificCondition(specificConditionType));
}

