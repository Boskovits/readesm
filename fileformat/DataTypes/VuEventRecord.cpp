#include "VuEventRecord.h"


/** \file 
\brief auto-generated file for VuEventRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../formatStrings.h"

VuEventRecord::VuEventRecord(const DataPointer& filewalker) : DataType(filewalker),
	eventType(readBigEndianInt1(start + 0 )),
	eventRecordPurpose(readBigEndianInt1(start + 1 )),
	eventTime(start + 2 ),
	cardSlots(start + 10 ),
	similarEventsNumber(readBigEndianInt1(start + 82 ))
{}

QString VuEventRecord::className() const {
	return "VuEventRecord";
}

int VuEventRecord::size() const{
	return 83 ;
}

void VuEventRecord::printOn(Reporter& report) const {
	report.tagValuePair(tr("eventType"), formatStrings::eventType(eventType));
	report.tagValuePair(tr("eventRecordPurpose"), formatStrings::eventRecordPurpose(eventRecordPurpose));
	report.tagValuePair(tr("eventTime"), eventTime.toString());
	report.writeBlock(cardSlots, tr("cardSlots"));
	report.tagValuePair(tr("similarEventsNumber"), similarEventsNumber);
}

