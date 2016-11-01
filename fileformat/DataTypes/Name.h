#ifndef NAME_H
#define NAME_H


/** \file 
\brief auto-generated file for Name

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "DataType.h"

class Name : public DataType {
	Q_DECLARE_TR_FUNCTIONS(Name)
public:
	
	QString surname;
	QString firstNames;

	Name(const DataPointer& filewalker);
	///returns "Name"
QString className() const;
	int size() const;
	static const int staticSize = 72;
	QString toString() const;
	virtual void printOn(Reporter& report) const;
};


#endif
