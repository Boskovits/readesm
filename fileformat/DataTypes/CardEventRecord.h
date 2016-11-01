#ifndef CARDEVENTRECORD_H
#define CARDEVENTRECORD_H


/** \file 
\brief auto-generated file for CardEventRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/VehicleRegistration.h"
#include "../DataTypes/Timespan.h"
#include "DataType.h"

class CardEventRecord : public DataType {
	Q_DECLARE_TR_FUNCTIONS(CardEventRecord)
public:
	
	int eventType;
	Timespan eventTime;
	VehicleRegistration eventVehicleRegistration;

	CardEventRecord(const DataPointer& filewalker);
	///returns "CardEventRecord"
QString className() const;
	int size() const;
	static const int staticSize = 24;
	virtual void printOn(Reporter& report) const;
};


#endif
