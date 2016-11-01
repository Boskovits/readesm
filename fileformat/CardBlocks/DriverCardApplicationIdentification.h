#ifndef DRIVERCARDAPPLICATIONIDENTIFICATION_H
#define DRIVERCARDAPPLICATIONIDENTIFICATION_H


/** \file 
\brief auto-generated file for DriverCardApplicationIdentification

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/RawData.h"
#include "CardBlock.h"

class DriverCardApplicationIdentification : public CardBlock {
	Q_DECLARE_TR_FUNCTIONS(DriverCardApplicationIdentification)
public:
	
	int typeOfTachographCardId;
	RawData cardStructureVersion;
	int noOfEventsPerType;
	int noOfFaultsPerType;
	int activityStructureLength;
	int noOfCardVehicleRecords;
	int noOfCardPlaceRecords;

	DriverCardApplicationIdentification(const DataPointer& filewalker);
	///returns "DriverCardApplicationIdentification"
QString className() const;
	QString title() const;
	static const int Type = 0x0501;
	virtual void printOn(Reporter& report) const;
};


#endif
