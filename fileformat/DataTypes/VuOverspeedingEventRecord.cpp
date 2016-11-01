#include "VuOverspeedingEventRecord.h"


/** \file 
\brief auto-generated file for VuOverspeedingEventRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../formatStrings.h"

VuOverspeedingEventRecord::VuOverspeedingEventRecord(const DataPointer& filewalker) : DataType(filewalker),
	eventType(readBigEndianInt1(start + 0 )),
	eventRecordPurpose(readBigEndianInt1(start + 1 )),
	eventTime(start + 2 ),
	maxSpeedValue(readBigEndianInt1(start + 10 )),
	averageSpeedValue(readBigEndianInt1(start + 11 )),
	cardNumberDriverSlotBegin(start + 12 ),
	similarEventsNumber(readBigEndianInt1(start + 30 ))
{}

QString VuOverspeedingEventRecord::className() const {
	return "VuOverspeedingEventRecord";
}

int VuOverspeedingEventRecord::size() const{
	return 31 ;
}

void VuOverspeedingEventRecord::printOn(Reporter& report) const {
	report.tagValuePair(tr("eventType"), formatStrings::eventType(eventType));
	report.tagValuePair(tr("eventRecordPurpose"), formatStrings::eventRecordPurpose(eventRecordPurpose));
	report.tagValuePair(tr("eventTime"), eventTime.toString());
	report.tagValuePair(tr("maxSpeedValue"), QString("%1 km/h").arg(maxSpeedValue));
	report.tagValuePair(tr("averageSpeedValue"), QString("%1 km/h").arg(averageSpeedValue));
	report.writeBlock(cardNumberDriverSlotBegin, tr("cardNumberDriverSlotBegin"));
	report.tagValuePair(tr("similarEventsNumber"), similarEventsNumber);
}

