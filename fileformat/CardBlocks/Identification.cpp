#include "Identification.h"


/** \file 
\brief auto-generated file for Identification

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../formatStrings.h"

Identification::Identification(const DataPointer& filewalker) : CardBlock(filewalker),
	cardIssuingMemberState(readBigEndianInt1(start + 5 )),
	cardNumber(fixedString(start + 6 , 16)),
	cardIssuingAuthorityName(codepageStringCombination(start + 22 , 36)),
	cardIssueDate(start + 58 ),
	cardValidityBegin(start + 62 ),
	cardExpiryDate(start + 66 ),
	cardHolderName(start + 70 ),
	cardHolderBirthDate(start + 142 ),
	cardHolderPreferredLanguage(fixedString(start + 146 , 2))
{}

QString Identification::className() const {
	return "Identification";
}

QString Identification::title() const {
	return tr("Card identification and card holder identification");
}

void Identification::printOn(Reporter& report) const {
	report.tagValuePair(tr("cardIssuingMemberState"), formatStrings::nationNumeric(cardIssuingMemberState));
	report.tagValuePair(tr("cardNumber"), cardNumber);
	report.tagValuePair(tr("cardIssuingAuthorityName"), cardIssuingAuthorityName);
	report.tagValuePair(tr("cardIssueDate"), cardIssueDate.toString());
	report.tagValuePair(tr("cardValidityBegin"), cardValidityBegin.toString());
	report.tagValuePair(tr("cardExpiryDate"), cardExpiryDate.toString());
	report.writeBlock(cardHolderName, tr("cardHolderName"));
	report.writeBlock(cardHolderBirthDate, tr("cardHolderBirthDate"));
	report.tagValuePair(tr("cardHolderPreferredLanguage"), cardHolderPreferredLanguage);if(size() != 148 ){ report.tagValuePair("should have", 148 ); report.tagValuePair("has", size()); }
}

