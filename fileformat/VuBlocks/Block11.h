#ifndef BLOCK11_H
#define BLOCK11_H


/** \file 
\brief auto-generated file for Block11

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/RawData.h"
#include "../DataTypes/Subblocks.h"
#include "../DataTypes/Block11Record.h"
#include "VuBlock.h"

/** This block is not covered in the european law. My (Andreas) guess is that this is something manufacturer-specific, in the files from siemens vdos this block (code 0x7611) contains, well, card numbers and timestamps. It might be something else from other manufacturers. If you do know what it does, please tell me.*/
class Block11 : public VuBlock {
	Q_DECLARE_TR_FUNCTIONS(Block11)
public:
	
	RawData header;
	Subblocks<Block11Record> block11Records;

	Block11(const DataPointer& filewalker);
	///returns "Block11"
QString className() const;
	QString title() const;
	static const int Type = 0x11;
	int size() const;
	virtual void printOn(Reporter& report) const;
};


#endif
