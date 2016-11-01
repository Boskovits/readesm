#include "Block14.h"


/** \file 
\brief auto-generated file for Block14

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





Block14::Block14(const DataPointer& filewalker) : VuBlock(filewalker),
	data(start + 2 , 2)
{	hasSignature = false;
}

QString Block14::className() const {
	return "Block14";
}

QString Block14::title() const {
	return tr("Unknown Block with TREP 0x14");
}

int Block14::size() const{
	return 4 ;
}

void Block14::printOn(Reporter& report) const {
	report.tagValuePair(tr("data"), data.toString());
}

