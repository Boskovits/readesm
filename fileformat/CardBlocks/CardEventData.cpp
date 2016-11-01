#include "CardEventData.h"


/** \file 
\brief auto-generated file for CardEventData

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





CardEventData::CardEventData(const DataPointer& filewalker) : CardBlock(filewalker),
	cardEventRecords(Subblocks<CardEventRecord>::fromTypeAndLength(start + 5 , dataBlockSize() - (5 )))
{}

QString CardEventData::className() const {
	return "CardEventData";
}

QString CardEventData::title() const {
	return tr("Events Data");
}

void CardEventData::printOn(Reporter& report) const {
	report.writeArray(cardEventRecords, tr("cardEventRecords"));if(size() != 5  + cardEventRecords.size()){ report.tagValuePair("should have", 5  + cardEventRecords.size()); report.tagValuePair("has", size()); }
}

