#include "RawCardActivityDailyRecord.h"


/** \file 
\brief auto-generated file for RawCardActivityDailyRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





RawCardActivityDailyRecord::RawCardActivityDailyRecord(const DataPointer& filewalker) : DataType(filewalker),
	activityRecordPreviousLength(readBigEndianInt2(start + 0 )),
	activityRecordLength(readBigEndianInt2(start + 2 )),
	activityRecordDate(start + 4 ),
	activityPresenceCounter(readBigEndianInt2(start + 8 )),
	activityDayDistance(readBigEndianInt2(start + 10 ))
{}

QString RawCardActivityDailyRecord::className() const {
	return "RawCardActivityDailyRecord";
}

QString RawCardActivityDailyRecord::title() const {
	return tr("Activities on %1").arg(activityRecordDate.toString());
}

int RawCardActivityDailyRecord::size() const{
	return 12 ;
}

void RawCardActivityDailyRecord::printOn(Reporter& report) const {
	report.tagValuePair(tr("activityRecordPreviousLength"), QString("%1 Bytes").arg(activityRecordPreviousLength));
	report.tagValuePair(tr("activityRecordLength"), QString("%1 Bytes").arg(activityRecordLength));
	report.tagValuePair(tr("activityRecordDate"), activityRecordDate.toString());
	report.tagValuePair(tr("activityPresenceCounter"), activityPresenceCounter);
	report.tagValuePair(tr("activityDayDistance"), QString("%1 km").arg(activityDayDistance));
}

