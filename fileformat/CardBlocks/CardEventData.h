#ifndef CARDEVENTDATA_H
#define CARDEVENTDATA_H


/** \file 
\brief auto-generated file for CardEventData

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/Subblocks.h"
#include "../DataTypes/CardEventRecord.h"
#include "CardBlock.h"

class CardEventData : public CardBlock {
	Q_DECLARE_TR_FUNCTIONS(CardEventData)
public:
	
	Subblocks<CardEventRecord> cardEventRecords;

	CardEventData(const DataPointer& filewalker);
	///returns "CardEventData"
QString className() const;
	QString title() const;
	static const int Type = 0x0502;
	virtual void printOn(Reporter& report) const;
};


#endif
