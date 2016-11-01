#include "CardPlaceDailyWorkPeriod.h"


/** \file 
\brief auto-generated file for CardPlaceDailyWorkPeriod

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





CardPlaceDailyWorkPeriod::CardPlaceDailyWorkPeriod(const DataPointer& filewalker) : CardBlock(filewalker),
	placePointerNewestRecord(readBigEndianInt1(start + 5 )),
	placeRecords(Subblocks<PlaceRecord>::fromTypeAndLength(start + 6 , dataBlockSize() - (6 )))
{}

QString CardPlaceDailyWorkPeriod::className() const {
	return "CardPlaceDailyWorkPeriod";
}

QString CardPlaceDailyWorkPeriod::title() const {
	return tr("Places");
}

void CardPlaceDailyWorkPeriod::printOn(Reporter& report) const {
	report.tagValuePair(tr("placePointerNewestRecord"), placePointerNewestRecord);
	report.writeArray(placeRecords, tr("placeRecords"));if(size() != 6  + placeRecords.size()){ report.tagValuePair("should have", 6  + placeRecords.size()); report.tagValuePair("has", size()); }
}

