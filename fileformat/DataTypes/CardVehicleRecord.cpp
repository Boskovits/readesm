#include "CardVehicleRecord.h"


/** \file 
\brief auto-generated file for CardVehicleRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





CardVehicleRecord::CardVehicleRecord(const DataPointer& filewalker) : DataType(filewalker),
	vehicleOdometerBegin(readBigEndianInt3(start + 0 )),
	vehicleOdometerEnd(readBigEndianInt3(start + 3 )),
	vehicleUse(start + 6 ),
	registration(start + 14 ),
	vuDataBlockCounter(readBigEndianInt2(start + 29 ))
{}

QString CardVehicleRecord::className() const {
	return "CardVehicleRecord";
}

int CardVehicleRecord::size() const{
	return 31 ;
}

QString CardVehicleRecord::toString() const{
	return tr("%1 km on %2 (%3)")
			.arg(vehicleOdometerEnd - vehicleOdometerBegin)
			.arg(registration.toString())
			.arg(vehicleUse.toString());
}

void CardVehicleRecord::printOn(Reporter& report) const {
	report.tagValuePair(tr("vehicleOdometerBegin"), QString("%1 km").arg(vehicleOdometerBegin));
	report.tagValuePair(tr("vehicleOdometerEnd"), QString("%1 km").arg(vehicleOdometerEnd));
	report.tagValuePair(tr("vehicleUse"), vehicleUse.toString());
	report.writeBlock(registration, tr("registration"));
	report.tagValuePair(tr("vuDataBlockCounter"), vuDataBlockCounter);
}

