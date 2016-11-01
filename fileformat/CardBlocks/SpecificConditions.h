#ifndef SPECIFICCONDITIONS_H
#define SPECIFICCONDITIONS_H


/** \file 
\brief auto-generated file for SpecificConditions

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/Subblocks.h"
#include "CardBlock.h"
#include "../DataTypes/SpecificConditionRecord.h"

class SpecificConditions : public CardBlock {
	Q_DECLARE_TR_FUNCTIONS(SpecificConditions)
public:
	
	Subblocks<SpecificConditionRecord> specificConditionRecords;

	SpecificConditions(const DataPointer& filewalker);
	///returns "SpecificConditions"
QString className() const;
	QString title() const;
	static const int Type = 0x0522;
	virtual void printOn(Reporter& report) const;
};


#endif
