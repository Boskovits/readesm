#include "CardEventRecord.h"


/** \file 
\brief auto-generated file for CardEventRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../formatStrings.h"

CardEventRecord::CardEventRecord(const DataPointer& filewalker) : DataType(filewalker),
	eventType(readBigEndianInt1(start + 0 )),
	eventTime(start + 1 ),
	eventVehicleRegistration(start + 9 )
{}

QString CardEventRecord::className() const {
	return "CardEventRecord";
}

int CardEventRecord::size() const{
	return 24 ;
}

void CardEventRecord::printOn(Reporter& report) const {
	report.tagValuePair(tr("eventType"), formatStrings::eventType(eventType));
	report.tagValuePair(tr("eventTime"), eventTime.toString());
	report.writeBlock(eventVehicleRegistration, tr("eventVehicleRegistration"));
}

