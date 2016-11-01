#ifndef RAWCARDDRIVERACTIVITY_H
#define RAWCARDDRIVERACTIVITY_H


/** \file 
\brief auto-generated file for RawCardDriverActivity

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/RawData.h"
#include "CardBlock.h"

class RawCardDriverActivity : public CardBlock {
	Q_DECLARE_TR_FUNCTIONS(CardDriverActivity)
public:
	
	int oldestRecord;
	int newestRecord;
	RawData cyclicData;

	RawCardDriverActivity(const DataPointer& filewalker);
	///returns "RawCardDriverActivity"
QString className() const;
	QString title() const;
	static const int Type = 0x0504;
	virtual void printOn(Reporter& report) const;
};


#endif
