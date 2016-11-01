#include "RawVuActivities.h"


/** \file 
\brief auto-generated file for RawVuActivities

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





RawVuActivities::RawVuActivities(const DataPointer& filewalker) : VuBlock(filewalker),
	timeReal(start + 2 ),
	odometerValueMidnight(readBigEndianInt3(start + 6 )),
	vuCardIWRecords(Subblocks<VuCardIWRecord>::fromTypeAndCount(start + 9  + 2, readBigEndianInt2(start + 9 ))),
	activityChangeInfos(Subblocks<ActivityChangeInfo>::fromTypeAndCount(start + 11  + vuCardIWRecords.size() + 2, readBigEndianInt2(start + 11  + vuCardIWRecords.size()))),
	vuPlaceDailyWorkPeriodRecords(Subblocks<VuPlaceDailyWorkPeriodRecord>::fromTypeAndCount(start + 13  + vuCardIWRecords.size() + activityChangeInfos.size() + 1, readBigEndianInt1(start + 13  + vuCardIWRecords.size() + activityChangeInfos.size()))),
	specificConditionRecords(Subblocks<SpecificConditionRecord>::fromTypeAndCount(start + 14  + vuCardIWRecords.size() + activityChangeInfos.size() + vuPlaceDailyWorkPeriodRecords.size() + 2, readBigEndianInt2(start + 14  + vuCardIWRecords.size() + activityChangeInfos.size() + vuPlaceDailyWorkPeriodRecords.size())))
{}

QString RawVuActivities::className() const {
	return "RawVuActivities";
}

QString RawVuActivities::title() const {
	return tr("Activities on %1").arg(timeReal.toString());
}

int RawVuActivities::size() const{
	return 144  + vuCardIWRecords.size() + activityChangeInfos.size() + vuPlaceDailyWorkPeriodRecords.size() + specificConditionRecords.size();
}

void RawVuActivities::printOn(Reporter& report) const {
	report.tagValuePair(tr("timeReal"), timeReal.toString());
	report.tagValuePair(tr("odometerValueMidnight"), QString("%1 km").arg(odometerValueMidnight));
	report.writeArray(vuCardIWRecords, tr("vuCardIWRecords"));
	report.writeArray(activityChangeInfos, tr("activityChangeInfos"));
	report.writeArray(vuPlaceDailyWorkPeriodRecords, tr("vuPlaceDailyWorkPeriodRecords"));
	report.writeArray(specificConditionRecords, tr("specificConditionRecords"));
}

