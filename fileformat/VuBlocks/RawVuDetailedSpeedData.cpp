#include "RawVuDetailedSpeedData.h"


/** \file 
\brief auto-generated file for RawVuDetailedSpeedData

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





RawVuDetailedSpeedData::RawVuDetailedSpeedData(const DataPointer& filewalker) : VuBlock(filewalker),
	vuDetailedSpeedBlocks(Subblocks<VuDetailedSpeedBlock>::fromTypeAndCount(start + 2  + 2, readBigEndianInt2(start + 2 )))
{}

QString RawVuDetailedSpeedData::className() const {
	return "RawVuDetailedSpeedData";
}

QString RawVuDetailedSpeedData::title() const {
	return tr("Detailed Speed");
}

int RawVuDetailedSpeedData::size() const{
	return 132  + vuDetailedSpeedBlocks.size();
}

void RawVuDetailedSpeedData::printOn(Reporter& report) const {
	report.writeArray(vuDetailedSpeedBlocks, tr("vuDetailedSpeedBlocks"));
}

