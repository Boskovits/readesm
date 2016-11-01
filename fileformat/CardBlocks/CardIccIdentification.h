#ifndef CARDICCIDENTIFICATION_H
#define CARDICCIDENTIFICATION_H


/** \file 
\brief auto-generated file for CardIccIdentification

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/ExtendedSerialNumber.h"
#include "../DataTypes/RawData.h"
#include "CardBlock.h"

class CardIccIdentification : public CardBlock {
	Q_DECLARE_TR_FUNCTIONS(CardIccIdentification)
public:
	
	int clockStop;
	ExtendedSerialNumber cardExtendedSerialNumber;
	RawData cardApprovalNumber;
	RawData cardPersonaliserID;
	RawData embedderIcAssemblerId;
	RawData icIdentifier;

	CardIccIdentification(const DataPointer& filewalker);
	///returns "CardIccIdentification"
QString className() const;
	QString title() const;
	static const int Type = 0x0002;
	virtual void printOn(Reporter& report) const;
};


#endif
