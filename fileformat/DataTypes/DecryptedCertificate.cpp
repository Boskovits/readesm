#include "DecryptedCertificate.h"


/** \file 
\brief auto-generated file for DecryptedCertificate

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





DecryptedCertificate::DecryptedCertificate(const DataPointer& filewalker) : DataType(filewalker),
	certificateProfileIdentifier(readBigEndianInt1(start + 0 )),
	certificateAuthorityReference(start + 1 ),
	certificateHolderAuthorization(start + 9 ),
	endOfValidity(start + 16 ),
	certificateHolderReference(start + 20 ),
	rsaPublicKey(start + 28 )
{}

QString DecryptedCertificate::className() const {
	return "DecryptedCertificate";
}

int DecryptedCertificate::size() const{
	return 164 ;
}

void DecryptedCertificate::printOn(Reporter& report) const {
	report.tagValuePair(tr("certificateProfileIdentifier"), certificateProfileIdentifier);
	report.writeBlock(certificateAuthorityReference, tr("certificateAuthorityReference"));
	report.writeBlock(certificateHolderAuthorization, tr("certificateHolderAuthorization"));
	report.tagValuePair(tr("endOfValidity"), endOfValidity.toString());
	report.writeBlock(certificateHolderReference, tr("certificateHolderReference"));
	report.writeBlock(rsaPublicKey, tr("rsaPublicKey"));
}

