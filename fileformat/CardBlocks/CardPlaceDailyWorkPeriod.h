#ifndef CARDPLACEDAILYWORKPERIOD_H
#define CARDPLACEDAILYWORKPERIOD_H


/** \file 
\brief auto-generated file for CardPlaceDailyWorkPeriod

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/Subblocks.h"
#include "CardBlock.h"
#include "../DataTypes/PlaceRecord.h"

class CardPlaceDailyWorkPeriod : public CardBlock {
	Q_DECLARE_TR_FUNCTIONS(CardPlaceDailyWorkPeriod)
public:
	
	int placePointerNewestRecord;
	Subblocks<PlaceRecord> placeRecords;

	CardPlaceDailyWorkPeriod(const DataPointer& filewalker);
	///returns "CardPlaceDailyWorkPeriod"
QString className() const;
	QString title() const;
	static const int Type = 0x0506;
	virtual void printOn(Reporter& report) const;
};


#endif
