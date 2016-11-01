#include "SpecificConditions.h"


/** \file 
\brief auto-generated file for SpecificConditions

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





SpecificConditions::SpecificConditions(const DataPointer& filewalker) : CardBlock(filewalker),
	specificConditionRecords(Subblocks<SpecificConditionRecord>::fromTypeAndLength(start + 5 , dataBlockSize() - (5 )))
{}

QString SpecificConditions::className() const {
	return "SpecificConditions";
}

QString SpecificConditions::title() const {
	return tr("Specific Conditions");
}

void SpecificConditions::printOn(Reporter& report) const {
	report.writeArray(specificConditionRecords, tr("specificConditionRecords"));if(size() != 5  + specificConditionRecords.size()){ report.tagValuePair("should have", 5  + specificConditionRecords.size()); report.tagValuePair("has", size()); }
}

