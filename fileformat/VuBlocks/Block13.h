#ifndef BLOCK13_H
#define BLOCK13_H


/** \file 
\brief auto-generated file for Block13

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/RawData.h"
#include "../DataTypes/Subblocks.h"
#include "../DataTypes/Block11Record.h"
#include "VuBlock.h"

/** This block is not covered in the european law. My (Andreas) guess is that this is something manufacturer-specific, in the files from siemens vdos this block (code 0x7613) contains, well, card numbers and timestamps. It might be something else from other manufacturers. If you do know what it does, please tell me.*/
class Block13 : public VuBlock {
	Q_DECLARE_TR_FUNCTIONS(Block13)
public:
	
	RawData header;
	Subblocks<Block11Record> block11Records;

	Block13(const DataPointer& filewalker);
	///returns "Block13"
QString className() const;
	QString title() const;
	static const int Type = 0x13;
	int size() const;
	virtual void printOn(Reporter& report) const;
};


#endif
