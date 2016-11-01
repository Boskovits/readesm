#include "PlainCertificate.h"


/** \file 
\brief auto-generated file for PlainCertificate

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





PlainCertificate::PlainCertificate(const DataPointer& filewalker) : DataType(filewalker),
	keyIdentifier(start + 0 ),
	rsaPublicKey(start + 8 )
{}

QString PlainCertificate::className() const {
	return "PlainCertificate";
}

int PlainCertificate::size() const{
	return 144 ;
}

void PlainCertificate::printOn(Reporter& report) const {
	report.writeBlock(keyIdentifier, tr("keyIdentifier"));
	report.writeBlock(rsaPublicKey, tr("rsaPublicKey"));
}

