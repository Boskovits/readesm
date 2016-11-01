#ifndef BCDMONTHYEAR_H
#define BCDMONTHYEAR_H


/** \file 
\brief auto-generated file for BcdMonthYear

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/RawData.h"
#include "DataType.h"

class BcdMonthYear : public DataType {
	Q_DECLARE_TR_FUNCTIONS(BcdMonthYear)
public:
	
	RawData encodedDate;

	BcdMonthYear(const DataPointer& filewalker);
	///returns "BcdMonthYear"
QString className() const;
	int size() const;
	static const int staticSize = 2;
	QString toString() const;
	virtual void printOn(Reporter& report) const;
};


#endif
