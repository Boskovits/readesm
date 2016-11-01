#include "Block11.h"


/** \file 
\brief auto-generated file for Block11

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





Block11::Block11(const DataPointer& filewalker) : VuBlock(filewalker),
	header(start + 2 , 15),
	block11Records(Subblocks<Block11Record>::fromTypeAndCount(start + 17  + 2, readBigEndianInt2(start + 17 )))
{	hasSignature = false;
}

QString Block11::className() const {
	return "Block11";
}

QString Block11::title() const {
	return tr("Unknown Block with TREP 0x11");
}

int Block11::size() const{
	return 19  + block11Records.size();
}

void Block11::printOn(Reporter& report) const {
	report.tagValuePair(tr("header"), header.toString());
	report.writeArray(block11Records, tr("block11Records"));
}

