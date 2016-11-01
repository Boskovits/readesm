#include "CardChipIdentification.h"


/** \file 
\brief auto-generated file for CardChipIdentification

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





CardChipIdentification::CardChipIdentification(const DataPointer& filewalker) : CardBlock(filewalker),
	icSerialNumber(start + 5 , 4),
	icManufacturingReference(start + 9 , 4)
{}

QString CardChipIdentification::className() const {
	return "CardChipIdentification";
}

QString CardChipIdentification::title() const {
	return tr("Card chip identification");
}

void CardChipIdentification::printOn(Reporter& report) const {
	report.tagValuePair(tr("icSerialNumber"), icSerialNumber.toString());
	report.tagValuePair(tr("icManufacturingReference"), icManufacturingReference.toString());if(size() != 13 ){ report.tagValuePair("should have", 13 ); report.tagValuePair("has", size()); }
}

