#ifndef RAWVUCARDIWRECORD_H
#define RAWVUCARDIWRECORD_H


/** \file 
\brief auto-generated file for RawVuCardIWRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/FullCardNumber.h"
#include "../DataTypes/TimeReal.h"
#include "../DataTypes/Name.h"
#include "../DataTypes/VehicleRegistration.h"
#include "DataType.h"

class RawVuCardIWRecord : public DataType {
	Q_DECLARE_TR_FUNCTIONS(VuCardIWRecord)
public:
	
	Name cardHolderName;
	FullCardNumber cardNumber;
	TimeReal cardExpiryDate;
	TimeReal cardInsertionTime;
	int vehicleOdometerValueAtInsertion;
	int cardSlotNumber;
	TimeReal cardWithdrawalTime;
	int vehicleOdometerValueAtWithdrawal;
	VehicleRegistration previousVehicleRegistration;
	TimeReal previousCardWithdrawalTime;
	int manualInputFlag;

	RawVuCardIWRecord(const DataPointer& filewalker);
	///returns "RawVuCardIWRecord"
QString className() const;
	int size() const;
	static const int staticSize = 129;
	virtual void printOn(Reporter& report) const;
};


#endif
