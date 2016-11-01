#ifndef CARDFAULTDATA_H
#define CARDFAULTDATA_H


/** \file 
\brief auto-generated file for CardFaultData

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/Subblocks.h"
#include "../DataTypes/CardEventRecord.h"
#include "CardBlock.h"

class CardFaultData : public CardBlock {
	Q_DECLARE_TR_FUNCTIONS(CardFaultData)
public:
	
	Subblocks<CardEventRecord> cardFaultRecords;

	CardFaultData(const DataPointer& filewalker);
	///returns "CardFaultData"
QString className() const;
	QString title() const;
	static const int Type = 0x0503;
	virtual void printOn(Reporter& report) const;
};


#endif
