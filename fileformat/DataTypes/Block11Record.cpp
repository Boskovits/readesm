#include "Block11Record.h"


/** \file 
\brief auto-generated file for Block11Record

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





Block11Record::Block11Record(const DataPointer& filewalker) : DataType(filewalker),
	cardNumber(start + 0 ),
	time(start + 18 ),
	sometimesDuration(readBigEndianInt2(start + 26 )),
	payloadData(start + 28 , 30)
{}

QString Block11Record::className() const {
	return "Block11Record";
}

int Block11Record::size() const{
	return 58 ;
}

void Block11Record::printOn(Reporter& report) const {
	report.writeBlock(cardNumber, tr("cardNumber"));
	report.tagValuePair(tr("time"), time.toString());
	report.tagValuePair(tr("sometimesDuration"), QString("%1 s").arg(sometimesDuration));
	report.tagValuePair(tr("payloadData"), payloadData.toString());
}

