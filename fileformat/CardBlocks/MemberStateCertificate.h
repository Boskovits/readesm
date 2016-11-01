#ifndef MEMBERSTATECERTIFICATE_H
#define MEMBERSTATECERTIFICATE_H


/** \file 
\brief auto-generated file for MemberStateCertificate

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "CardBlock.h"
#include "../DataTypes/EncryptedCertificate.h"

class MemberStateCertificate : public CardBlock {
	Q_DECLARE_TR_FUNCTIONS(MemberStateCertificate)
public:
	
	EncryptedCertificate certificate;

	MemberStateCertificate(const DataPointer& filewalker);
	///returns "MemberStateCertificate"
QString className() const;
	QString title() const;
	static const int Type = 0xc108;
	virtual void printOn(Reporter& report) const;
};


#endif
