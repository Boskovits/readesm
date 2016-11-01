#ifndef CARDCONTROLACTIVITYDATARECORD_H
#define CARDCONTROLACTIVITYDATARECORD_H


/** \file 
\brief auto-generated file for CardControlActivityDataRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/FullCardNumber.h"
#include "../DataTypes/TimeReal.h"
#include "CardBlock.h"
#include "../DataTypes/Timespan.h"
#include "../DataTypes/VehicleRegistration.h"

class CardControlActivityDataRecord : public CardBlock {
	Q_DECLARE_TR_FUNCTIONS(CardControlActivityDataRecord)
public:
	
	int controlType;
	TimeReal controlTime;
	FullCardNumber controlCardNumber;
	VehicleRegistration controlVehicleRegistration;
	Timespan controlDownloadPeriod;

	CardControlActivityDataRecord(const DataPointer& filewalker);
	///returns "CardControlActivityDataRecord"
QString className() const;
	QString title() const;
	static const int Type = 0x0508;
	virtual void printOn(Reporter& report) const;
};


#endif
