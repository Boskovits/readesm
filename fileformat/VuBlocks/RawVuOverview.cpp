#include "RawVuOverview.h"


/** \file 
\brief auto-generated file for RawVuOverview

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





RawVuOverview::RawVuOverview(const DataPointer& filewalker) : VuBlock(filewalker),
	memberStateCertificate(start + 2 ),
	vuCertificate(start + 196 ),
	vehicleIdentificationNumber(fixedString(start + 390 , 17)),
	vehicleRegistrationIdentification(start + 407 ),
	currentDateTime(start + 422 ),
	vuDownloadablePeriod(start + 426 ),
	CardSlotsStatus(readBigEndianInt1(start + 434 )),
	downloadingTime(start + 435 ),
	cardNumber(start + 439 ),
	companyOrWorkshopName(codepageStringCombination(start + 457 , 36)),
	vuCompanyLocksRecords(Subblocks<VuCompanyLocksRecord>::fromTypeAndCount(start + 493  + 1, readBigEndianInt1(start + 493 ))),
	vuControlActivityRecords(Subblocks<VuControlActivityRecord>::fromTypeAndCount(start + 494  + vuCompanyLocksRecords.size() + 1, readBigEndianInt1(start + 494  + vuCompanyLocksRecords.size())))
{}

QString RawVuOverview::className() const {
	return "RawVuOverview";
}

QString RawVuOverview::title() const {
	return tr("Overview");
}

int RawVuOverview::size() const{
	return 623  + vuCompanyLocksRecords.size() + vuControlActivityRecords.size();
}

void RawVuOverview::printOn(Reporter& report) const {
	report.writeBlock(memberStateCertificate, tr("memberStateCertificate"));
	report.writeBlock(vuCertificate, tr("vuCertificate"));
	report.tagValuePair(tr("vehicleIdentificationNumber"), vehicleIdentificationNumber);
	report.writeBlock(vehicleRegistrationIdentification, tr("vehicleRegistrationIdentification"));
	report.tagValuePair(tr("currentDateTime"), currentDateTime.toString());
	report.tagValuePair(tr("vuDownloadablePeriod"), vuDownloadablePeriod.toString());
	report.tagValuePair(tr("CardSlotsStatus"), CardSlotsStatus);
	report.tagValuePair(tr("downloadingTime"), downloadingTime.toString());
	report.writeBlock(cardNumber, tr("cardNumber"));
	report.tagValuePair(tr("companyOrWorkshopName"), companyOrWorkshopName);
	report.writeArray(vuCompanyLocksRecords, tr("vuCompanyLocksRecords"));
	report.writeArray(vuControlActivityRecords, tr("vuControlActivityRecords"));
}

