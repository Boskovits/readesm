#include "CardIccIdentification.h"


/** \file 
\brief auto-generated file for CardIccIdentification

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





CardIccIdentification::CardIccIdentification(const DataPointer& filewalker) : CardBlock(filewalker),
	clockStop(readBigEndianInt1(start + 5 )),
	cardExtendedSerialNumber(start + 6 ),
	cardApprovalNumber(start + 14 , 8),
	cardPersonaliserID(start + 22 , 1),
	embedderIcAssemblerId(start + 23 , 5),
	icIdentifier(start + 28 , 2)
{}

QString CardIccIdentification::className() const {
	return "CardIccIdentification";
}

QString CardIccIdentification::title() const {
	return tr("Card ICC identification");
}

void CardIccIdentification::printOn(Reporter& report) const {
	report.tagValuePair(tr("clockStop"), clockStop);
	report.writeBlock(cardExtendedSerialNumber, tr("cardExtendedSerialNumber"));
	report.tagValuePair(tr("cardApprovalNumber"), cardApprovalNumber.toString());
	report.tagValuePair(tr("cardPersonaliserID"), cardPersonaliserID.toString());
	report.tagValuePair(tr("embedderIcAssemblerId"), embedderIcAssemblerId.toString());
	report.tagValuePair(tr("icIdentifier"), icIdentifier.toString());if(size() != 30 ){ report.tagValuePair("should have", 30 ); report.tagValuePair("has", size()); }
}

