#include "ExtendedSerialNumber.h"


/** \file 
\brief auto-generated file for ExtendedSerialNumber

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../formatStrings.h"

ExtendedSerialNumber::ExtendedSerialNumber(const DataPointer& filewalker) : DataType(filewalker),
	serialNumber(readBigEndianInt4(start + 0 )),
	date(start + 4 ),
	equipmentType(readBigEndianInt1(start + 6 )),
	manufacturerCode(readBigEndianInt1(start + 7 ))
{}

QString ExtendedSerialNumber::className() const {
	return "ExtendedSerialNumber";
}

int ExtendedSerialNumber::size() const{
	return 8 ;
}

QString ExtendedSerialNumber::toString() const{
	return QString("%1 (%2) %3, %4")
		.arg(serialNumber)
		.arg(date.toString())
		.arg(formatStrings::equipmentType(equipmentType))
		.arg(formatStrings::manufacturerCode(manufacturerCode));
		;
}

void ExtendedSerialNumber::printOn(Reporter& report) const {
	report.tagValuePair(tr("serialNumber"), serialNumber);
	report.writeBlock(date, tr("date"));
	report.tagValuePair(tr("equipmentType"), formatStrings::equipmentType(equipmentType));
	report.tagValuePair(tr("manufacturerCode"), formatStrings::manufacturerCode(manufacturerCode));
}

