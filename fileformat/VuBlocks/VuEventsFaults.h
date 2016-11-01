#ifndef VUEVENTSFAULTS_H
#define VUEVENTSFAULTS_H


/** \file 
\brief auto-generated file for VuEventsFaults

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/Subblocks.h"
#include "../DataTypes/VuEventRecord.h"
#include "../DataTypes/TimeReal.h"
#include "../DataTypes/VuOverspeedingEventRecord.h"
#include "../DataTypes/VuFaultRecord.h"
#include "../DataTypes/VuTimeAdjustmentRecord.h"
#include "VuBlock.h"

class VuEventsFaults : public VuBlock {
	Q_DECLARE_TR_FUNCTIONS(VuEventsFaults)
public:
	
	Subblocks<VuFaultRecord> vuFaultRecords;
	Subblocks<VuEventRecord> vuEventRecords;
	TimeReal lastOverspeedControlTime;
	TimeReal firstOverspeedSince;
	int numberOfOverspeedSince;
	Subblocks<VuOverspeedingEventRecord> vuOverspeedingEventRecords;
	Subblocks<VuTimeAdjustmentRecord> vuTimeAdjustmentRecords;

	VuEventsFaults(const DataPointer& filewalker);
	///returns "VuEventsFaults"
QString className() const;
	QString title() const;
	static const int Type = 0x3;
	int size() const;
	virtual void printOn(Reporter& report) const;
};


#endif
