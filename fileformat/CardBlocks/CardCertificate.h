#ifndef CARDCERTIFICATE_H
#define CARDCERTIFICATE_H


/** \file 
\brief auto-generated file for CardCertificate

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "CardBlock.h"
#include "../DataTypes/EncryptedCertificate.h"

class CardCertificate : public CardBlock {
	Q_DECLARE_TR_FUNCTIONS(CardCertificate)
public:
	
	EncryptedCertificate certificate;

	CardCertificate(const DataPointer& filewalker);
	///returns "CardCertificate"
QString className() const;
	QString title() const;
	static const int Type = 0xc100;
	virtual void printOn(Reporter& report) const;
};


#endif
