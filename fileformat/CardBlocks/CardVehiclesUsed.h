#ifndef CARDVEHICLESUSED_H
#define CARDVEHICLESUSED_H


/** \file 
\brief auto-generated file for CardVehiclesUsed

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/Subblocks.h"
#include "CardBlock.h"
#include "../DataTypes/CardVehicleRecord.h"

class CardVehiclesUsed : public CardBlock {
	Q_DECLARE_TR_FUNCTIONS(CardVehiclesUsed)
public:
	
	int vehiclePointerNewestRecord;
	Subblocks<CardVehicleRecord> cardVehicleRecords;

	CardVehiclesUsed(const DataPointer& filewalker);
	///returns "CardVehiclesUsed"
QString className() const;
	QString title() const;
	static const int Type = 0x0505;
	virtual void printOn(Reporter& report) const;
};


#endif
