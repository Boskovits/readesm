#include "RawFullCardNumber.h"


/** \file 
\brief auto-generated file for RawFullCardNumber

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../formatStrings.h"

RawFullCardNumber::RawFullCardNumber(const DataPointer& filewalker) : DataType(filewalker),
	cardType(readBigEndianInt1(start + 0 )),
	cardIssuingMemberState(readBigEndianInt1(start + 1 )),
	cardNumber(fixedString(start + 2 , 16))
{}

QString RawFullCardNumber::className() const {
	return "RawFullCardNumber";
}

int RawFullCardNumber::size() const{
	return 18 ;
}

QString RawFullCardNumber::toString() const{
	return QString("%1 (%2, %3)")
		.arg(cardNumber)
		.arg(formatStrings::nationNumeric(cardIssuingMemberState))
		.arg(formatStrings::equipmentType(cardType));
}

void RawFullCardNumber::printOn(Reporter& report) const {
	report.tagValuePair(tr("cardType"), formatStrings::equipmentType(cardType));
	report.tagValuePair(tr("cardIssuingMemberState"), formatStrings::nationNumeric(cardIssuingMemberState));
	report.tagValuePair(tr("cardNumber"), cardNumber);
}

