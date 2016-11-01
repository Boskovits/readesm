#ifndef RAWVUDETAILEDSPEEDDATA_H
#define RAWVUDETAILEDSPEEDDATA_H


/** \file 
\brief auto-generated file for RawVuDetailedSpeedData

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/Subblocks.h"
#include "../DataTypes/VuDetailedSpeedBlock.h"
#include "VuBlock.h"

class RawVuDetailedSpeedData : public VuBlock {
	Q_DECLARE_TR_FUNCTIONS(VuDetailedSpeedData)
public:
	
	Subblocks<VuDetailedSpeedBlock> vuDetailedSpeedBlocks;

	RawVuDetailedSpeedData(const DataPointer& filewalker);
	///returns "RawVuDetailedSpeedData"
QString className() const;
	QString title() const;
	static const int Type = 0x4;
	int size() const;
	virtual void printOn(Reporter& report) const;
};


#endif
