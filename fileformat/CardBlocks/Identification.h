#ifndef IDENTIFICATION_H
#define IDENTIFICATION_H


/** \file 
\brief auto-generated file for Identification

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/TimeReal.h"
#include "../DataTypes/Name.h"
#include "CardBlock.h"
#include "../DataTypes/BcdDate.h"

class Identification : public CardBlock {
	Q_DECLARE_TR_FUNCTIONS(Identification)
public:
	
	int cardIssuingMemberState;
	QString cardNumber;
	QString cardIssuingAuthorityName;
	TimeReal cardIssueDate;
	TimeReal cardValidityBegin;
	TimeReal cardExpiryDate;
	Name cardHolderName;
	BcdDate cardHolderBirthDate;
	QString cardHolderPreferredLanguage;

	Identification(const DataPointer& filewalker);
	///returns "Identification"
QString className() const;
	QString title() const;
	static const int Type = 0x0520;
	virtual void printOn(Reporter& report) const;
};


#endif
