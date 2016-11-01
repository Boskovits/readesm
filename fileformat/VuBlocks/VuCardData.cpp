#include "VuCardData.h"


/** \file 
\brief auto-generated file for VuCardData

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





VuCardData::VuCardData(const DataPointer& filewalker) : VuBlock(filewalker)
{	hasSignature = false;
}

QString VuCardData::className() const {
	return "VuCardData";
}

QString VuCardData::title() const {
	return tr("Card Data");
}

int VuCardData::size() const{
	return 2 ;
}

void VuCardData::printOn(Reporter& report) const {
}

