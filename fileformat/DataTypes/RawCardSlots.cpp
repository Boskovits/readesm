#include "RawCardSlots.h"


/** \file 
\brief auto-generated file for RawCardSlots

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





RawCardSlots::RawCardSlots(const DataPointer& filewalker) : DataType(filewalker),
	cardNumberDriverSlotBegin(start + 0 ),
	cardNumberCoDriverSlotBegin(start + 18 ),
	cardNumberDriverSlotEnd(start + 36 ),
	cardNumberCoDriverSlotEnd(start + 54 )
{}

QString RawCardSlots::className() const {
	return "RawCardSlots";
}

int RawCardSlots::size() const{
	return 72 ;
}

void RawCardSlots::printOn(Reporter& report) const {
	report.writeBlock(cardNumberDriverSlotBegin, tr("cardNumberDriverSlotBegin"));
	report.writeBlock(cardNumberCoDriverSlotBegin, tr("cardNumberCoDriverSlotBegin"));
	report.writeBlock(cardNumberDriverSlotEnd, tr("cardNumberDriverSlotEnd"));
	report.writeBlock(cardNumberCoDriverSlotEnd, tr("cardNumberCoDriverSlotEnd"));
}

