#ifndef VUPLACEDAILYWORKPERIODRECORD_H
#define VUPLACEDAILYWORKPERIODRECORD_H


/** \file 
\brief auto-generated file for VuPlaceDailyWorkPeriodRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/FullCardNumber.h"
#include "../DataTypes/PlaceRecord.h"
#include "DataType.h"

class VuPlaceDailyWorkPeriodRecord : public DataType {
	Q_DECLARE_TR_FUNCTIONS(VuPlaceDailyWorkPeriodRecord)
public:
	
	FullCardNumber fullCardNumber;
	PlaceRecord placeRecord;

	VuPlaceDailyWorkPeriodRecord(const DataPointer& filewalker);
	///returns "VuPlaceDailyWorkPeriodRecord"
QString className() const;
	int size() const;
	static const int staticSize = 28;
	virtual void printOn(Reporter& report) const;
};


#endif
