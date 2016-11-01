#include "VehicleRegistration.h"


/** \file 
\brief auto-generated file for VehicleRegistration

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../formatStrings.h"

VehicleRegistration::VehicleRegistration(const DataPointer& filewalker) : DataType(filewalker),
	vehicleRegistrationNation(readBigEndianInt1(start + 0 )),
	vehicleRegistrationNumber(codepageStringCombination(start + 1 , 14))
{}

QString VehicleRegistration::className() const {
	return "VehicleRegistration";
}

int VehicleRegistration::size() const{
	return 15 ;
}

QString VehicleRegistration::toString() const{
	return QString("%1 (%2)")
			.arg(vehicleRegistrationNumber)
			.arg(formatStrings::nationNumeric(vehicleRegistrationNation));
}

void VehicleRegistration::printOn(Reporter& report) const {
	report.tagValuePair(tr("vehicleRegistrationNation"), formatStrings::nationNumeric(vehicleRegistrationNation));
	report.tagValuePair(tr("vehicleRegistrationNumber"), vehicleRegistrationNumber);
}

