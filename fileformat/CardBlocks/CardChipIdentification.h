#ifndef CARDCHIPIDENTIFICATION_H
#define CARDCHIPIDENTIFICATION_H


/** \file 
\brief auto-generated file for CardChipIdentification

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/RawData.h"
#include "CardBlock.h"

/** ef ic according to en 726-3*/
class CardChipIdentification : public CardBlock {
	Q_DECLARE_TR_FUNCTIONS(CardChipIdentification)
public:
	
	RawData icSerialNumber;
	RawData icManufacturingReference;

	CardChipIdentification(const DataPointer& filewalker);
	///returns "CardChipIdentification"
QString className() const;
	QString title() const;
	static const int Type = 0x0005;
	virtual void printOn(Reporter& report) const;
};


#endif
