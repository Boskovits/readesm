#include "CardVehiclesUsed.h"


/** \file 
\brief auto-generated file for CardVehiclesUsed

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





CardVehiclesUsed::CardVehiclesUsed(const DataPointer& filewalker) : CardBlock(filewalker),
	vehiclePointerNewestRecord(readBigEndianInt2(start + 5 )),
	cardVehicleRecords(Subblocks<CardVehicleRecord>::fromTypeAndLength(start + 7 , dataBlockSize() - (7 )))
{}

QString CardVehiclesUsed::className() const {
	return "CardVehiclesUsed";
}

QString CardVehiclesUsed::title() const {
	return tr("Vehicles Used");
}

void CardVehiclesUsed::printOn(Reporter& report) const {
	report.tagValuePair(tr("vehiclePointerNewestRecord"), vehiclePointerNewestRecord);
	report.writeArray(cardVehicleRecords, tr("cardVehicleRecords"));if(size() != 7  + cardVehicleRecords.size()){ report.tagValuePair("should have", 7  + cardVehicleRecords.size()); report.tagValuePair("has", size()); }
}

