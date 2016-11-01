#include "CardCertificate.h"


/** \file 
\brief auto-generated file for CardCertificate

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





CardCertificate::CardCertificate(const DataPointer& filewalker) : CardBlock(filewalker),
	certificate(start + 5 )
{}

QString CardCertificate::className() const {
	return "CardCertificate";
}

QString CardCertificate::title() const {
	return tr("Card Certificate");
}

void CardCertificate::printOn(Reporter& report) const {
	report.writeBlock(certificate, tr("certificate"));if(size() != 199 ){ report.tagValuePair("should have", 199 ); report.tagValuePair("has", size()); }
}

