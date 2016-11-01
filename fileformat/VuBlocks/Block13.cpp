#include "Block13.h"


/** \file 
\brief auto-generated file for Block13

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





Block13::Block13(const DataPointer& filewalker) : VuBlock(filewalker),
	header(start + 2 , 30),
	block11Records(Subblocks<Block11Record>::fromTypeAndCount(start + 32  + 2, readBigEndianInt2(start + 32 )))
{	hasSignature = false;
}

QString Block13::className() const {
	return "Block13";
}

QString Block13::title() const {
	return tr("Unknown Block with TREP 0x13");
}

int Block13::size() const{
	return 34  + block11Records.size();
}

void Block13::printOn(Reporter& report) const {
	report.tagValuePair(tr("header"), header.toString());
	report.writeArray(block11Records, tr("block11Records"));
}

