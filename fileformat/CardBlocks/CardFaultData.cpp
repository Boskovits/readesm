#include "CardFaultData.h"


/** \file 
\brief auto-generated file for CardFaultData

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





CardFaultData::CardFaultData(const DataPointer& filewalker) : CardBlock(filewalker),
	cardFaultRecords(Subblocks<CardEventRecord>::fromTypeAndLength(start + 5 , dataBlockSize() - (5 )))
{}

QString CardFaultData::className() const {
	return "CardFaultData";
}

QString CardFaultData::title() const {
	return tr("Faults Data");
}

void CardFaultData::printOn(Reporter& report) const {
	report.writeArray(cardFaultRecords, tr("cardFaultRecords"));if(size() != 5  + cardFaultRecords.size()){ report.tagValuePair("should have", 5  + cardFaultRecords.size()); report.tagValuePair("has", size()); }
}

