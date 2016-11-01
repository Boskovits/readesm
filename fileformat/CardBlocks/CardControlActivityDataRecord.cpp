#include "CardControlActivityDataRecord.h"


/** \file 
\brief auto-generated file for CardControlActivityDataRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





CardControlActivityDataRecord::CardControlActivityDataRecord(const DataPointer& filewalker) : CardBlock(filewalker),
	controlType(readBigEndianInt1(start + 5 )),
	controlTime(start + 6 ),
	controlCardNumber(start + 10 ),
	controlVehicleRegistration(start + 28 ),
	controlDownloadPeriod(start + 43 )
{}

QString CardControlActivityDataRecord::className() const {
	return "CardControlActivityDataRecord";
}

QString CardControlActivityDataRecord::title() const {
	return tr("Control Activity Data");
}

void CardControlActivityDataRecord::printOn(Reporter& report) const {
	report.tagValuePair(tr("controlType"), controlType);
	report.tagValuePair(tr("controlTime"), controlTime.toString());
	report.writeBlock(controlCardNumber, tr("controlCardNumber"));
	report.writeBlock(controlVehicleRegistration, tr("controlVehicleRegistration"));
	report.tagValuePair(tr("controlDownloadPeriod"), controlDownloadPeriod.toString());if(size() != 51 ){ report.tagValuePair("should have", 51 ); report.tagValuePair("has", size()); }
}

