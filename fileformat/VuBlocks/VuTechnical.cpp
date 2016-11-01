#include "VuTechnical.h"


/** \file 
\brief auto-generated file for VuTechnical

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





VuTechnical::VuTechnical(const DataPointer& filewalker) : VuBlock(filewalker),
	vuManufacturerName(codepageStringCombination(start + 2 , 36)),
	vuManufacturerAddress(codepageStringCombination(start + 38 , 36)),
	vuPartNumber(fixedString(start + 74 , 16)),
	vuSerialNumber(start + 90 ),
	vuSoftwareVersion(fixedString(start + 98 , 4)),
	vuSoftInstallationDate(start + 102 ),
	vuManufacturingDate(start + 106 ),
	vuApprovalNumber(fixedString(start + 110 , 8)),
	sensorSerialNumber(start + 118 ),
	sensorApprovalNumber(fixedString(start + 126 , 8)),
	sensorPairingDateFirst(start + 134 ),
	vuCalibrationRecords(Subblocks<VuCalibrationRecord>::fromTypeAndCount(start + 138  + 1, readBigEndianInt1(start + 138 )))
{}

QString VuTechnical::className() const {
	return "VuTechnical";
}

QString VuTechnical::title() const {
	return tr("Technical Data");
}

int VuTechnical::size() const{
	return 267  + vuCalibrationRecords.size();
}

void VuTechnical::printOn(Reporter& report) const {
	report.tagValuePair(tr("vuManufacturerName"), vuManufacturerName);
	report.tagValuePair(tr("vuManufacturerAddress"), vuManufacturerAddress);
	report.tagValuePair(tr("vuPartNumber"), vuPartNumber);
	report.writeBlock(vuSerialNumber, tr("vuSerialNumber"));
	report.tagValuePair(tr("vuSoftwareVersion"), vuSoftwareVersion);
	report.tagValuePair(tr("vuSoftInstallationDate"), vuSoftInstallationDate.toString());
	report.tagValuePair(tr("vuManufacturingDate"), vuManufacturingDate.toString());
	report.tagValuePair(tr("vuApprovalNumber"), vuApprovalNumber);
	report.writeBlock(sensorSerialNumber, tr("sensorSerialNumber"));
	report.tagValuePair(tr("sensorApprovalNumber"), sensorApprovalNumber);
	report.tagValuePair(tr("sensorPairingDateFirst"), sensorPairingDateFirst.toString());
	report.writeArray(vuCalibrationRecords, tr("vuCalibrationRecords"));
}

