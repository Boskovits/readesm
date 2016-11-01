#include "VuDetailedSpeedBlock.h"


/** \file 
\brief auto-generated file for VuDetailedSpeedBlock

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





VuDetailedSpeedBlock::VuDetailedSpeedBlock(const DataPointer& filewalker) : DataType(filewalker),
	speedBlockBeginDate(start + 0 ),
	speedsPerSecond(start + 4 , 60)
{}

QString VuDetailedSpeedBlock::className() const {
	return "VuDetailedSpeedBlock";
}

int VuDetailedSpeedBlock::size() const{
	return 64 ;
}

void VuDetailedSpeedBlock::printOn(Reporter& report) const {
	report.tagValuePair(tr("speedBlockBeginDate"), speedBlockBeginDate.toString());
	report.tagValuePair(tr("speedsPerSecond"), speedsPerSecond.toString());
}

