#ifndef VUCARDDATA_H
#define VUCARDDATA_H


/** \file 
\brief auto-generated file for VuCardData

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "VuBlock.h"

/** Card Data should be saved to a separate file*/
class VuCardData : public VuBlock {
	Q_DECLARE_TR_FUNCTIONS(VuCardData)
public:
	

	VuCardData(const DataPointer& filewalker);
	///returns "VuCardData"
QString className() const;
	QString title() const;
	static const int Type = 0x6;
	int size() const;
	virtual void printOn(Reporter& report) const;
};


#endif
