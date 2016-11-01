#include "VuEventsFaults.h"


/** \file 
\brief auto-generated file for VuEventsFaults

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





VuEventsFaults::VuEventsFaults(const DataPointer& filewalker) : VuBlock(filewalker),
	vuFaultRecords(Subblocks<VuFaultRecord>::fromTypeAndCount(start + 2  + 1, readBigEndianInt1(start + 2 ))),
	vuEventRecords(Subblocks<VuEventRecord>::fromTypeAndCount(start + 3  + vuFaultRecords.size() + 1, readBigEndianInt1(start + 3  + vuFaultRecords.size()))),
	lastOverspeedControlTime(start + 4  + vuFaultRecords.size() + vuEventRecords.size()),
	firstOverspeedSince(start + 8  + vuFaultRecords.size() + vuEventRecords.size()),
	numberOfOverspeedSince(readBigEndianInt1(start + 12  + vuFaultRecords.size() + vuEventRecords.size())),
	vuOverspeedingEventRecords(Subblocks<VuOverspeedingEventRecord>::fromTypeAndCount(start + 13  + vuFaultRecords.size() + vuEventRecords.size() + 1, readBigEndianInt1(start + 13  + vuFaultRecords.size() + vuEventRecords.size()))),
	vuTimeAdjustmentRecords(Subblocks<VuTimeAdjustmentRecord>::fromTypeAndCount(start + 14  + vuFaultRecords.size() + vuEventRecords.size() + vuOverspeedingEventRecords.size() + 1, readBigEndianInt1(start + 14  + vuFaultRecords.size() + vuEventRecords.size() + vuOverspeedingEventRecords.size())))
{}

QString VuEventsFaults::className() const {
	return "VuEventsFaults";
}

QString VuEventsFaults::title() const {
	return tr("Events and faults");
}

int VuEventsFaults::size() const{
	return 143  + vuFaultRecords.size() + vuEventRecords.size() + vuOverspeedingEventRecords.size() + vuTimeAdjustmentRecords.size();
}

void VuEventsFaults::printOn(Reporter& report) const {
	report.writeArray(vuFaultRecords, tr("vuFaultRecords"));
	report.writeArray(vuEventRecords, tr("vuEventRecords"));
	report.tagValuePair(tr("lastOverspeedControlTime"), lastOverspeedControlTime.toString());
	report.tagValuePair(tr("firstOverspeedSince"), firstOverspeedSince.toString());
	report.tagValuePair(tr("numberOfOverspeedSince"), numberOfOverspeedSince);
	report.writeArray(vuOverspeedingEventRecords, tr("vuOverspeedingEventRecords"));
	report.writeArray(vuTimeAdjustmentRecords, tr("vuTimeAdjustmentRecords"));
}

