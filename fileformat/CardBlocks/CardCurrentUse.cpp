#include "CardCurrentUse.h"


/** \file 
\brief auto-generated file for CardCurrentUse

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





CardCurrentUse::CardCurrentUse(const DataPointer& filewalker) : CardBlock(filewalker),
	sessionOpenTime(start + 5 ),
	sessionOpenVehicle(start + 9 )
{}

QString CardCurrentUse::className() const {
	return "CardCurrentUse";
}

QString CardCurrentUse::title() const {
	return tr("Current Usage");
}

void CardCurrentUse::printOn(Reporter& report) const {
	report.tagValuePair(tr("sessionOpenTime"), sessionOpenTime.toString());
	report.writeBlock(sessionOpenVehicle, tr("sessionOpenVehicle"));if(size() != 24 ){ report.tagValuePair("should have", 24 ); report.tagValuePair("has", size()); }
}

