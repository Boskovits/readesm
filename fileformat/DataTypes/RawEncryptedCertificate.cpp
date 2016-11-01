#include "RawEncryptedCertificate.h"


/** \file 
\brief auto-generated file for RawEncryptedCertificate

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





RawEncryptedCertificate::RawEncryptedCertificate(const DataPointer& filewalker) : DataType(filewalker),
	sign(start + 0 , 128),
	cndash(start + 128 , 58),
	certificateAuthorityReference(start + 186 )
{}

QString RawEncryptedCertificate::className() const {
	return "RawEncryptedCertificate";
}

int RawEncryptedCertificate::size() const{
	return 194 ;
}

void RawEncryptedCertificate::printOn(Reporter& report) const {
	report.tagValuePair(tr("sign"), sign.toString());
	report.tagValuePair(tr("cndash"), cndash.toString());
	report.writeBlock(certificateAuthorityReference, tr("certificateAuthorityReference"));
}

