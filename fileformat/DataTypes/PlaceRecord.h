#ifndef PLACERECORD_H
#define PLACERECORD_H


/** \file 
\brief auto-generated file for PlaceRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/TimeReal.h"
#include "DataType.h"

class PlaceRecord : public DataType {
	Q_DECLARE_TR_FUNCTIONS(PlaceRecord)
public:
	
	TimeReal entryTime;
	int entryTypeDailyWorkPeriod;
	int dailyWorkPeriodCountry;
	int dailyWorkPeriodRegion;
	int vehicleOdometerValue;

	PlaceRecord(const DataPointer& filewalker);
	///returns "PlaceRecord"
QString className() const;
	int size() const;
	static const int staticSize = 10;
	QString toString() const;
	virtual void printOn(Reporter& report) const;
};


#endif
