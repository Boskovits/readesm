#ifndef VUCALIBRATIONRECORD_H
#define VUCALIBRATIONRECORD_H


/** \file 
\brief auto-generated file for VuCalibrationRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/FullCardNumber.h"
#include "../DataTypes/TimeReal.h"
#include "../DataTypes/VehicleRegistration.h"
#include "DataType.h"

/** Used in the technical block on the vehicle unit, See page 163 of l207.pdf*/
class VuCalibrationRecord : public DataType {
	Q_DECLARE_TR_FUNCTIONS(VuCalibrationRecord)
public:
	
	int calibrationPurpose;
	QString workshopName;
	QString workshopAddress;
	FullCardNumber workshopCardNumber;
	TimeReal workshopCardExpiryDate;
	QString vehicleIdentificationNumber;
	VehicleRegistration vehicleRegistrationIdentification;
	int wVehicleCharacteristicConstant;
	int kConstantOfRecordingEquipment;
	int lTyreCircumference;
	QString tyreSize;
	int authorisedSpeed;
	int oldOdometerValue;
	int newOdometerValue;
	TimeReal oldTimeValue;
	TimeReal newTimeValue;
	TimeReal nextCalibrationDate;

	VuCalibrationRecord(const DataPointer& filewalker);
	///returns "VuCalibrationRecord"
QString className() const;
	QString title() const;
	int size() const;
	static const int staticSize = 167;
	virtual void printOn(Reporter& report) const;
};


#endif
