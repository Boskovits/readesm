#ifndef LASTCARDDOWNLOAD_H
#define LASTCARDDOWNLOAD_H


/** \file 
\brief auto-generated file for LastCardDownload

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "../DataTypes/TimeReal.h"
#include "CardBlock.h"

class LastCardDownload : public CardBlock {
	Q_DECLARE_TR_FUNCTIONS(LastCardDownload)
public:
	
	TimeReal lastCardDownload;

	LastCardDownload(const DataPointer& filewalker);
	///returns "LastCardDownload"
QString className() const;
	QString title() const;
	static const int Type = 0x050e;
	virtual void printOn(Reporter& report) const;
};


#endif
