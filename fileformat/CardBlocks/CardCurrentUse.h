#ifndef CARDCURRENTUSE_H
#define CARDCURRENTUSE_H


/** \file 
\brief auto-generated file for CardCurrentUse

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/TimeReal.h"
#include "CardBlock.h"
#include "../DataTypes/VehicleRegistration.h"

/** The default value for the vehicle registration seems to be different here*/
class CardCurrentUse : public CardBlock {
	Q_DECLARE_TR_FUNCTIONS(CardCurrentUse)
public:
	
	TimeReal sessionOpenTime;
	VehicleRegistration sessionOpenVehicle;

	CardCurrentUse(const DataPointer& filewalker);
	///returns "CardCurrentUse"
QString className() const;
	QString title() const;
	static const int Type = 0x0507;
	virtual void printOn(Reporter& report) const;
};


#endif
