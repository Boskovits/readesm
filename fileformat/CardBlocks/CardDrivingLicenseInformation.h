#ifndef CARDDRIVINGLICENSEINFORMATION_H
#define CARDDRIVINGLICENSEINFORMATION_H


/** \file 
\brief auto-generated file for CardDrivingLicenseInformation

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "CardBlock.h"

class CardDrivingLicenseInformation : public CardBlock {
	Q_DECLARE_TR_FUNCTIONS(CardDrivingLicenseInformation)
public:
	
	QString drivingLicenseIssuingAuthorithy;
	int drivingLicenseIssuingNation;
	QString drivingLicenseNumber;

	CardDrivingLicenseInformation(const DataPointer& filewalker);
	///returns "CardDrivingLicenseInformation"
QString className() const;
	QString title() const;
	static const int Type = 0x0521;
	virtual void printOn(Reporter& report) const;
};


#endif
