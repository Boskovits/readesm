#include "CardDrivingLicenseInformation.h"


/** \file 
\brief auto-generated file for CardDrivingLicenseInformation

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../formatStrings.h"

CardDrivingLicenseInformation::CardDrivingLicenseInformation(const DataPointer& filewalker) : CardBlock(filewalker),
	drivingLicenseIssuingAuthorithy(codepageStringCombination(start + 5 , 36)),
	drivingLicenseIssuingNation(readBigEndianInt1(start + 41 )),
	drivingLicenseNumber(fixedString(start + 42 , 16))
{}

QString CardDrivingLicenseInformation::className() const {
	return "CardDrivingLicenseInformation";
}

QString CardDrivingLicenseInformation::title() const {
	return tr("Driving License Info");
}

void CardDrivingLicenseInformation::printOn(Reporter& report) const {
	report.tagValuePair(tr("drivingLicenseIssuingAuthorithy"), drivingLicenseIssuingAuthorithy);
	report.tagValuePair(tr("drivingLicenseIssuingNation"), formatStrings::nationNumeric(drivingLicenseIssuingNation));
	report.tagValuePair(tr("drivingLicenseNumber"), drivingLicenseNumber);if(size() != 58 ){ report.tagValuePair("should have", 58 ); report.tagValuePair("has", size()); }
}

