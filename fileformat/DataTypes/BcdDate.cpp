#include "BcdDate.h"


/** \file 
\brief auto-generated file for BcdDate

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





BcdDate::BcdDate(const DataPointer& filewalker) : DataType(filewalker),
	encodedDate(start + 0 , 4)
{}

QString BcdDate::className() const {
	return "BcdDate";
}

int BcdDate::size() const{
	return 4 ;
}

QString BcdDate::toString() const{
	return bcdbyte(encodedDate[0]) + bcdbyte(encodedDate[1]) + "-" + bcdbyte(encodedDate[2]) + "-" + bcdbyte(encodedDate[3]);
}

void BcdDate::printOn(Reporter& report) const {
	report.tagValuePair(tr("encodedDate"), encodedDate.toString());
}

