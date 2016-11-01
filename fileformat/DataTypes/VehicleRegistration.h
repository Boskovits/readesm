#ifndef VEHICLEREGISTRATION_H
#define VEHICLEREGISTRATION_H


/** \file 
\brief auto-generated file for VehicleRegistration

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "DataType.h"

class VehicleRegistration : public DataType {
	Q_DECLARE_TR_FUNCTIONS(VehicleRegistration)
public:
	
	int vehicleRegistrationNation;
	QString vehicleRegistrationNumber;

	VehicleRegistration(const DataPointer& filewalker);
	///returns "VehicleRegistration"
QString className() const;
	int size() const;
	static const int staticSize = 15;
	QString toString() const;
	virtual void printOn(Reporter& report) const;
};


#endif
