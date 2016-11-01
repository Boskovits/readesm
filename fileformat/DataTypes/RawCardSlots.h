#ifndef RAWCARDSLOTS_H
#define RAWCARDSLOTS_H


/** \file 
\brief auto-generated file for RawCardSlots

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/FullCardNumber.h"
#include "DataType.h"

class RawCardSlots : public DataType {
	Q_DECLARE_TR_FUNCTIONS(CardSlots)
public:
	
	FullCardNumber cardNumberDriverSlotBegin;
	FullCardNumber cardNumberCoDriverSlotBegin;
	FullCardNumber cardNumberDriverSlotEnd;
	FullCardNumber cardNumberCoDriverSlotEnd;

	RawCardSlots(const DataPointer& filewalker);
	///returns "RawCardSlots"
QString className() const;
	int size() const;
	static const int staticSize = 72;
	virtual void printOn(Reporter& report) const;
};


#endif
