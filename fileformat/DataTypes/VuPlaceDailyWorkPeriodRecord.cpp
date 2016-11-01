#include "VuPlaceDailyWorkPeriodRecord.h"


/** \file 
\brief auto-generated file for VuPlaceDailyWorkPeriodRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





VuPlaceDailyWorkPeriodRecord::VuPlaceDailyWorkPeriodRecord(const DataPointer& filewalker) : DataType(filewalker),
	fullCardNumber(start + 0 ),
	placeRecord(start + 18 )
{}

QString VuPlaceDailyWorkPeriodRecord::className() const {
	return "VuPlaceDailyWorkPeriodRecord";
}

int VuPlaceDailyWorkPeriodRecord::size() const{
	return 28 ;
}

void VuPlaceDailyWorkPeriodRecord::printOn(Reporter& report) const {
	report.writeBlock(fullCardNumber, tr("fullCardNumber"));
	report.writeBlock(placeRecord, tr("placeRecord"));
}

