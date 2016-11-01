#include "VuTimeAdjustmentRecord.h"


/** \file 
\brief auto-generated file for VuTimeAdjustmentRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





VuTimeAdjustmentRecord::VuTimeAdjustmentRecord(const DataPointer& filewalker) : DataType(filewalker),
	oldTimeValue(start + 0 ),
	newTimeValue(start + 4 ),
	workshopName(fixedString(start + 8 , 36)),
	workshopAddress(fixedString(start + 44 , 36)),
	workshopCardNumber(start + 80 )
{}

QString VuTimeAdjustmentRecord::className() const {
	return "VuTimeAdjustmentRecord";
}

int VuTimeAdjustmentRecord::size() const{
	return 98 ;
}

void VuTimeAdjustmentRecord::printOn(Reporter& report) const {
	report.tagValuePair(tr("oldTimeValue"), oldTimeValue.toString());
	report.tagValuePair(tr("newTimeValue"), newTimeValue.toString());
	report.tagValuePair(tr("workshopName"), workshopName);
	report.tagValuePair(tr("workshopAddress"), workshopAddress);
	report.writeBlock(workshopCardNumber, tr("workshopCardNumber"));
}

