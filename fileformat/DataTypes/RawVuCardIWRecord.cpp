#include "RawVuCardIWRecord.h"


/** \file 
\brief auto-generated file for RawVuCardIWRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





RawVuCardIWRecord::RawVuCardIWRecord(const DataPointer& filewalker) : DataType(filewalker),
	cardHolderName(start + 0 ),
	cardNumber(start + 72 ),
	cardExpiryDate(start + 90 ),
	cardInsertionTime(start + 94 ),
	vehicleOdometerValueAtInsertion(readBigEndianInt3(start + 98 )),
	cardSlotNumber(readBigEndianInt1(start + 101 )),
	cardWithdrawalTime(start + 102 ),
	vehicleOdometerValueAtWithdrawal(readBigEndianInt3(start + 106 )),
	previousVehicleRegistration(start + 109 ),
	previousCardWithdrawalTime(start + 124 ),
	manualInputFlag(readBigEndianInt1(start + 128 ))
{}

QString RawVuCardIWRecord::className() const {
	return "RawVuCardIWRecord";
}

int RawVuCardIWRecord::size() const{
	return 129 ;
}

void RawVuCardIWRecord::printOn(Reporter& report) const {
	report.writeBlock(cardHolderName, tr("cardHolderName"));
	report.writeBlock(cardNumber, tr("cardNumber"));
	report.tagValuePair(tr("cardExpiryDate"), cardExpiryDate.toString());
	report.tagValuePair(tr("cardInsertionTime"), cardInsertionTime.toString());
	report.tagValuePair(tr("vehicleOdometerValueAtInsertion"), QString("%1 km").arg(vehicleOdometerValueAtInsertion));
	report.tagValuePair(tr("cardSlotNumber"), cardSlotNumber);
	report.tagValuePair(tr("cardWithdrawalTime"), cardWithdrawalTime.toString());
	report.tagValuePair(tr("vehicleOdometerValueAtWithdrawal"), QString("%1 km").arg(vehicleOdometerValueAtWithdrawal));
	report.writeBlock(previousVehicleRegistration, tr("previousVehicleRegistration"));
	report.tagValuePair(tr("previousCardWithdrawalTime"), previousCardWithdrawalTime.toString());
	report.tagValuePair(tr("manualInputFlag"), manualInputFlag);
}

