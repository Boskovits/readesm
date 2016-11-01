#ifndef VUDETAILEDSPEEDBLOCK_H
#define VUDETAILEDSPEEDBLOCK_H


/** \file 
\brief auto-generated file for VuDetailedSpeedBlock

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/TimeReal.h"
#include "DataType.h"
#include "../DataTypes/RawData.h"

class VuDetailedSpeedBlock : public DataType {
	Q_DECLARE_TR_FUNCTIONS(VuDetailedSpeedBlock)
public:
	
	TimeReal speedBlockBeginDate;
	RawData speedsPerSecond;

	VuDetailedSpeedBlock(const DataPointer& filewalker);
	///returns "VuDetailedSpeedBlock"
QString className() const;
	int size() const;
	static const int staticSize = 64;
	virtual void printOn(Reporter& report) const;
};


#endif
