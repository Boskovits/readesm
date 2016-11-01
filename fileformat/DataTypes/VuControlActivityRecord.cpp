#include "VuControlActivityRecord.h"


/** \file 
\brief auto-generated file for VuControlActivityRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../formatStrings.h"

VuControlActivityRecord::VuControlActivityRecord(const DataPointer& filewalker) : DataType(filewalker),
	controlType(readBigEndianInt1(start + 0 )),
	controlTime(start + 1 ),
	controlCardNumber(start + 5 ),
	downloadPeriod(start + 23 )
{}

QString VuControlActivityRecord::className() const {
	return "VuControlActivityRecord";
}

int VuControlActivityRecord::size() const{
	return 31 ;
}

void VuControlActivityRecord::printOn(Reporter& report) const {
	report.tagValuePair(tr("controlType"), formatStrings::controlType(controlType));
	report.tagValuePair(tr("controlTime"), controlTime.toString());
	report.writeBlock(controlCardNumber, tr("controlCardNumber"));
	report.tagValuePair(tr("downloadPeriod"), downloadPeriod.toString());
}

