#include "RawKeyIdentifier.h"


/** \file 
\brief auto-generated file for RawKeyIdentifier

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../formatStrings.h"

RawKeyIdentifier::RawKeyIdentifier(const DataPointer& filewalker) : DataType(filewalker),
	certificateRequestSerialNumber(start + 0 , 4),
	date(start + 4 ),
	type(readBigEndianInt1(start + 6 )),
	manufacturerCode(readBigEndianInt1(start + 7 ))
{}

QString RawKeyIdentifier::className() const {
	return "RawKeyIdentifier";
}

int RawKeyIdentifier::size() const{
	return 8 ;
}

void RawKeyIdentifier::printOn(Reporter& report) const {
	report.tagValuePair(tr("certificateRequestSerialNumber"), certificateRequestSerialNumber.toString());
	report.writeBlock(date, tr("date"));
	report.tagValuePair(tr("type"), type);
	report.tagValuePair(tr("manufacturerCode"), formatStrings::manufacturerCode(manufacturerCode));
}

