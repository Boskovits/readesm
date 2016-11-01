#ifndef RAWFULLCARDNUMBER_H
#define RAWFULLCARDNUMBER_H


/** \file 
\brief auto-generated file for RawFullCardNumber

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "DataType.h"

class RawFullCardNumber : public DataType {
	Q_DECLARE_TR_FUNCTIONS(FullCardNumber)
public:
	
	int cardType;
	int cardIssuingMemberState;
	QString cardNumber;

	RawFullCardNumber(const DataPointer& filewalker);
	///returns "RawFullCardNumber"
QString className() const;
	int size() const;
	static const int staticSize = 18;
	QString toString() const;
	virtual void printOn(Reporter& report) const;
};


#endif
