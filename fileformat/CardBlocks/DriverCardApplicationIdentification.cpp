#include "DriverCardApplicationIdentification.h"


/** \file 
\brief auto-generated file for DriverCardApplicationIdentification

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../formatStrings.h"

DriverCardApplicationIdentification::DriverCardApplicationIdentification(const DataPointer& filewalker) : CardBlock(filewalker),
	typeOfTachographCardId(readBigEndianInt1(start + 5 )),
	cardStructureVersion(start + 6 , 2),
	noOfEventsPerType(readBigEndianInt1(start + 8 )),
	noOfFaultsPerType(readBigEndianInt1(start + 9 )),
	activityStructureLength(readBigEndianInt2(start + 10 )),
	noOfCardVehicleRecords(readBigEndianInt2(start + 12 )),
	noOfCardPlaceRecords(readBigEndianInt1(start + 14 ))
{}

QString DriverCardApplicationIdentification::className() const {
	return "DriverCardApplicationIdentification";
}

QString DriverCardApplicationIdentification::title() const {
	return tr("Application Identification");
}

void DriverCardApplicationIdentification::printOn(Reporter& report) const {
	report.tagValuePair(tr("typeOfTachographCardId"), formatStrings::equipmentType(typeOfTachographCardId));
	report.tagValuePair(tr("cardStructureVersion"), cardStructureVersion.toString());
	report.tagValuePair(tr("noOfEventsPerType"), noOfEventsPerType);
	report.tagValuePair(tr("noOfFaultsPerType"), noOfFaultsPerType);
	report.tagValuePair(tr("activityStructureLength"), QString("%1 Bytes").arg(activityStructureLength));
	report.tagValuePair(tr("noOfCardVehicleRecords"), noOfCardVehicleRecords);
	report.tagValuePair(tr("noOfCardPlaceRecords"), noOfCardPlaceRecords);if(size() != 15 ){ report.tagValuePair("should have", 15 ); report.tagValuePair("has", size()); }
}

