#ifndef CARDVEHICLERECORD_H
#define CARDVEHICLERECORD_H


/** \file 
\brief auto-generated file for CardVehicleRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/VehicleRegistration.h"
#include "../DataTypes/Timespan.h"
#include "DataType.h"

class CardVehicleRecord : public DataType {
	Q_DECLARE_TR_FUNCTIONS(CardVehicleRecord)
public:
	
	int vehicleOdometerBegin;
	int vehicleOdometerEnd;
	Timespan vehicleUse;
	VehicleRegistration registration;
	int vuDataBlockCounter;

	CardVehicleRecord(const DataPointer& filewalker);
	///returns "CardVehicleRecord"
QString className() const;
	int size() const;
	static const int staticSize = 31;
	QString toString() const;
	virtual void printOn(Reporter& report) const;
};


#endif
