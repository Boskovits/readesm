#include "vuBlockFactory.h"


/** \file 
\brief auto-generated file for vuBlockFactory

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "VuOverview.h"
#include "VuEventsFaults.h"
#include "Block13.h"
#include "Block11.h"
#include "VuTechnical.h"
#include "VuDetailedSpeedData.h"
#include "Block14.h"
#include "VuCardData.h"
#include "VuActivities.h"

QSharedPointer<VuBlock> vuBlockFactory(const DataPointer& start){
	if(start.bytesLeft() < 2 || readBigEndianInt1(start) != 0x76) return QSharedPointer<VuBlock>();
	switch(readBigEndianInt1(start + 1)) {
		case VuOverview::Type: return QSharedPointer<VuOverview>(new VuOverview(start));
		case VuTechnical::Type: return QSharedPointer<VuTechnical>(new VuTechnical(start));
		case VuCardData::Type: return QSharedPointer<VuCardData>(new VuCardData(start));
		case Block11::Type: return QSharedPointer<Block11>(new Block11(start));
		case Block13::Type: return QSharedPointer<Block13>(new Block13(start));
		case Block14::Type: return QSharedPointer<Block14>(new Block14(start));
		case VuEventsFaults::Type: return QSharedPointer<VuEventsFaults>(new VuEventsFaults(start));
		case VuActivities::Type: return QSharedPointer<VuActivities>(new VuActivities(start));
		case VuDetailedSpeedData::Type: return QSharedPointer<VuDetailedSpeedData>(new VuDetailedSpeedData(start));
		default: return QSharedPointer<VuBlock>(new VuUnknownBlock(start));
	}
}

