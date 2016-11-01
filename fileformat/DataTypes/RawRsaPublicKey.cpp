#include "RawRsaPublicKey.h"


/** \file 
\brief auto-generated file for RawRsaPublicKey

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





RawRsaPublicKey::RawRsaPublicKey(const DataPointer& filewalker) : DataType(filewalker),
	n(start + 0 , 128),
	e(start + 128 , 8)
{}

QString RawRsaPublicKey::className() const {
	return "RawRsaPublicKey";
}

int RawRsaPublicKey::size() const{
	return 136 ;
}

void RawRsaPublicKey::printOn(Reporter& report) const {
	report.tagValuePair(tr("n"), n.toString());
	report.tagValuePair(tr("e"), e.toString());
}

