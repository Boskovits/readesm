#ifndef BCDDATE_H
#define BCDDATE_H


/** \file 
\brief auto-generated file for BcdDate

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/RawData.h"
#include "DataType.h"

class BcdDate : public DataType {
	Q_DECLARE_TR_FUNCTIONS(BcdDate)
public:
	
	RawData encodedDate;

	BcdDate(const DataPointer& filewalker);
	///returns "BcdDate"
QString className() const;
	int size() const;
	static const int staticSize = 4;
	QString toString() const;
	virtual void printOn(Reporter& report) const;
};


#endif
