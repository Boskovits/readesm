#include "VuFaultRecord.h"


/** \file 
\brief auto-generated file for VuFaultRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../formatStrings.h"

VuFaultRecord::VuFaultRecord(const DataPointer& filewalker) : DataType(filewalker),
	eventType(readBigEndianInt1(start + 0 )),
	eventRecordPurpose(readBigEndianInt1(start + 1 )),
	eventTime(start + 2 ),
	cardSlots(start + 10 )
{}

QString VuFaultRecord::className() const {
	return "VuFaultRecord";
}

int VuFaultRecord::size() const{
	return 82 ;
}

void VuFaultRecord::printOn(Reporter& report) const {
	report.tagValuePair(tr("eventType"), formatStrings::eventType(eventType));
	report.tagValuePair(tr("eventRecordPurpose"), formatStrings::eventRecordPurpose(eventRecordPurpose));
	report.tagValuePair(tr("eventTime"), eventTime.toString());
	report.writeBlock(cardSlots, tr("cardSlots"));
}

