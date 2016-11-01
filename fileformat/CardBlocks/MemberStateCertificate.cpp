#include "MemberStateCertificate.h"


/** \file 
\brief auto-generated file for MemberStateCertificate

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





MemberStateCertificate::MemberStateCertificate(const DataPointer& filewalker) : CardBlock(filewalker),
	certificate(start + 5 )
{}

QString MemberStateCertificate::className() const {
	return "MemberStateCertificate";
}

QString MemberStateCertificate::title() const {
	return tr("CA Certificate");
}

void MemberStateCertificate::printOn(Reporter& report) const {
	report.writeBlock(certificate, tr("certificate"));if(size() != 199 ){ report.tagValuePair("should have", 199 ); report.tagValuePair("has", size()); }
}

