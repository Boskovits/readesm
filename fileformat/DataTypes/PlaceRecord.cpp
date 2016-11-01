#include "PlaceRecord.h"


/** \file 
\brief auto-generated file for PlaceRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../formatStrings.h"

PlaceRecord::PlaceRecord(const DataPointer& filewalker) : DataType(filewalker),
	entryTime(start + 0 ),
	entryTypeDailyWorkPeriod(readBigEndianInt1(start + 4 )),
	dailyWorkPeriodCountry(readBigEndianInt1(start + 5 )),
	dailyWorkPeriodRegion(readBigEndianInt1(start + 6 )),
	vehicleOdometerValue(readBigEndianInt3(start + 7 ))
{}

QString PlaceRecord::className() const {
	return "PlaceRecord";
}

int PlaceRecord::size() const{
	return 10 ;
}

QString PlaceRecord::toString() const{
	return QString("%1%2 - %3 - %4 km")
			.arg(formatStrings::nationNumeric(dailyWorkPeriodCountry))
			.arg(dailyWorkPeriodRegion == 0 ? "" : ", " + formatStrings::regionNumeric(dailyWorkPeriodRegion))
			.arg(entryTime.toString())
			.arg(vehicleOdometerValue);
}

void PlaceRecord::printOn(Reporter& report) const {
	report.tagValuePair(tr("entryTime"), entryTime.toString());
	report.tagValuePair(tr("entryTypeDailyWorkPeriod"), formatStrings::dailyWorkPeriod(entryTypeDailyWorkPeriod));
	report.tagValuePair(tr("dailyWorkPeriodCountry"), formatStrings::nationNumeric(dailyWorkPeriodCountry));
	report.tagValuePair(tr("dailyWorkPeriodRegion"), formatStrings::regionNumeric(dailyWorkPeriodRegion));
	report.tagValuePair(tr("vehicleOdometerValue"), QString("%1 km").arg(vehicleOdometerValue));
}

