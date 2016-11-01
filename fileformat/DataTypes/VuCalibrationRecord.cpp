#include "VuCalibrationRecord.h"


/** \file 
\brief auto-generated file for VuCalibrationRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../formatStrings.h"

VuCalibrationRecord::VuCalibrationRecord(const DataPointer& filewalker) : DataType(filewalker),
	calibrationPurpose(readBigEndianInt1(start + 0 )),
	workshopName(codepageStringCombination(start + 1 , 36)),
	workshopAddress(codepageStringCombination(start + 37 , 36)),
	workshopCardNumber(start + 73 ),
	workshopCardExpiryDate(start + 91 ),
	vehicleIdentificationNumber(fixedString(start + 95 , 17)),
	vehicleRegistrationIdentification(start + 112 ),
	wVehicleCharacteristicConstant(readBigEndianInt2(start + 127 )),
	kConstantOfRecordingEquipment(readBigEndianInt2(start + 129 )),
	lTyreCircumference(readBigEndianInt2(start + 131 )),
	tyreSize(fixedString(start + 133 , 15)),
	authorisedSpeed(readBigEndianInt1(start + 148 )),
	oldOdometerValue(readBigEndianInt3(start + 149 )),
	newOdometerValue(readBigEndianInt3(start + 152 )),
	oldTimeValue(start + 155 ),
	newTimeValue(start + 159 ),
	nextCalibrationDate(start + 163 )
{}

QString VuCalibrationRecord::className() const {
	return "VuCalibrationRecord";
}

QString VuCalibrationRecord::title() const {
	return tr("VuCalibrationRecord");
}

int VuCalibrationRecord::size() const{
	return 167 ;
}

void VuCalibrationRecord::printOn(Reporter& report) const {
	report.tagValuePair(tr("calibrationPurpose"), formatStrings::calibrationPurpose(calibrationPurpose));
	report.tagValuePair(tr("workshopName"), workshopName);
	report.tagValuePair(tr("workshopAddress"), workshopAddress);
	report.writeBlock(workshopCardNumber, tr("workshopCardNumber"));
	report.tagValuePair(tr("workshopCardExpiryDate"), workshopCardExpiryDate.toString());
	report.tagValuePair(tr("vehicleIdentificationNumber"), vehicleIdentificationNumber);
	report.writeBlock(vehicleRegistrationIdentification, tr("vehicleRegistrationIdentification"));
	report.tagValuePair(tr("wVehicleCharacteristicConstant"), QString("%1 Impulses/km").arg(wVehicleCharacteristicConstant));
	report.tagValuePair(tr("kConstantOfRecordingEquipment"), QString("%1 Impulses/km").arg(kConstantOfRecordingEquipment));
	report.tagValuePair(tr("lTyreCircumference"), QString("%1 /8 mm").arg(lTyreCircumference));
	report.tagValuePair(tr("tyreSize"), tyreSize);
	report.tagValuePair(tr("authorisedSpeed"), QString("%1 km/h").arg(authorisedSpeed));
	report.tagValuePair(tr("oldOdometerValue"), QString("%1 km").arg(oldOdometerValue));
	report.tagValuePair(tr("newOdometerValue"), QString("%1 km").arg(newOdometerValue));
	report.tagValuePair(tr("oldTimeValue"), oldTimeValue.toString());
	report.tagValuePair(tr("newTimeValue"), newTimeValue.toString());
	report.tagValuePair(tr("nextCalibrationDate"), nextCalibrationDate.toString());
}

