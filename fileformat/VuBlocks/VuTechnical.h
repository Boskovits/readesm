#ifndef VUTECHNICAL_H
#define VUTECHNICAL_H


/** \file 
\brief auto-generated file for VuTechnical

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/ExtendedSerialNumber.h"
#include "../DataTypes/TimeReal.h"
#include "../DataTypes/Subblocks.h"
#include "../DataTypes/VuCalibrationRecord.h"
#include "VuBlock.h"

class VuTechnical : public VuBlock {
	Q_DECLARE_TR_FUNCTIONS(VuTechnical)
public:
	
	QString vuManufacturerName;
	QString vuManufacturerAddress;
	QString vuPartNumber;
	ExtendedSerialNumber vuSerialNumber;
	QString vuSoftwareVersion;
	TimeReal vuSoftInstallationDate;
	TimeReal vuManufacturingDate;
	QString vuApprovalNumber;
	ExtendedSerialNumber sensorSerialNumber;
	QString sensorApprovalNumber;
	TimeReal sensorPairingDateFirst;
	Subblocks<VuCalibrationRecord> vuCalibrationRecords;

	VuTechnical(const DataPointer& filewalker);
	///returns "VuTechnical"
QString className() const;
	QString title() const;
	static const int Type = 0x5;
	int size() const;
	virtual void printOn(Reporter& report) const;
};


#endif
