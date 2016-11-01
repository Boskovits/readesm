#ifndef RAWVUACTIVITIES_H
#define RAWVUACTIVITIES_H


/** \file 
\brief auto-generated file for RawVuActivities

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/VuPlaceDailyWorkPeriodRecord.h"
#include "../DataTypes/Subblocks.h"
#include "../DataTypes/SpecificConditionRecord.h"
#include "../DataTypes/ActivityChangeInfo.h"
#include "../DataTypes/TimeReal.h"
#include "../DataTypes/VuCardIWRecord.h"
#include "VuBlock.h"

class RawVuActivities : public VuBlock {
	Q_DECLARE_TR_FUNCTIONS(VuActivities)
public:
	
	TimeReal timeReal;
	int odometerValueMidnight;
	Subblocks<VuCardIWRecord> vuCardIWRecords;
	Subblocks<ActivityChangeInfo> activityChangeInfos;
	Subblocks<VuPlaceDailyWorkPeriodRecord> vuPlaceDailyWorkPeriodRecords;
	Subblocks<SpecificConditionRecord> specificConditionRecords;

	RawVuActivities(const DataPointer& filewalker);
	///returns "RawVuActivities"
QString className() const;
	QString title() const;
	static const int Type = 0x2;
	int size() const;
	virtual void printOn(Reporter& report) const;
};


#endif
