#ifndef RAWVUOVERVIEW_H
#define RAWVUOVERVIEW_H


/** \file 
\brief auto-generated file for RawVuOverview

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/Subblocks.h"
#include "../DataTypes/VuControlActivityRecord.h"
#include "../DataTypes/VehicleRegistration.h"
#include "../DataTypes/VuCompanyLocksRecord.h"
#include "../DataTypes/FullCardNumber.h"
#include "../DataTypes/TimeReal.h"
#include "../DataTypes/EncryptedCertificate.h"
#include "../DataTypes/Timespan.h"
#include "VuBlock.h"

class RawVuOverview : public VuBlock {
	Q_DECLARE_TR_FUNCTIONS(VuOverview)
public:
	
	EncryptedCertificate memberStateCertificate;
	EncryptedCertificate vuCertificate;
	QString vehicleIdentificationNumber;
	VehicleRegistration vehicleRegistrationIdentification;
	TimeReal currentDateTime;
	Timespan vuDownloadablePeriod;
	int CardSlotsStatus;
	TimeReal downloadingTime;
	FullCardNumber cardNumber;
	QString companyOrWorkshopName;
	Subblocks<VuCompanyLocksRecord> vuCompanyLocksRecords;
	Subblocks<VuControlActivityRecord> vuControlActivityRecords;

	RawVuOverview(const DataPointer& filewalker);
	///returns "RawVuOverview"
QString className() const;
	QString title() const;
	static const int Type = 0x1;
	int size() const;
	virtual void printOn(Reporter& report) const;
};


#endif
