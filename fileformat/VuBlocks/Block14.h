#ifndef BLOCK14_H
#define BLOCK14_H


/** \file 
\brief auto-generated file for Block14

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/RawData.h"
#include "VuBlock.h"

class Block14 : public VuBlock {
	Q_DECLARE_TR_FUNCTIONS(Block14)
public:
	
	RawData data;

	Block14(const DataPointer& filewalker);
	///returns "Block14"
QString className() const;
	QString title() const;
	static const int Type = 0x14;
	int size() const;
	virtual void printOn(Reporter& report) const;
};


#endif
