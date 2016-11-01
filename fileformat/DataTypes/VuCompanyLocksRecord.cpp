#include "VuCompanyLocksRecord.h"


/** \file 
\brief auto-generated file for VuCompanyLocksRecord

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





VuCompanyLocksRecord::VuCompanyLocksRecord(const DataPointer& filewalker) : DataType(filewalker),
	lockTime(start + 0 ),
	companyName(codepageStringCombination(start + 8 , 36)),
	companyAddress(codepageStringCombination(start + 44 , 36)),
	companyCardNumber(start + 80 )
{}

QString VuCompanyLocksRecord::className() const {
	return "VuCompanyLocksRecord";
}

int VuCompanyLocksRecord::size() const{
	return 98 ;
}

void VuCompanyLocksRecord::printOn(Reporter& report) const {
	report.tagValuePair(tr("lockTime"), lockTime.toString());
	report.tagValuePair(tr("companyName"), companyName);
	report.tagValuePair(tr("companyAddress"), companyAddress);
	report.writeBlock(companyCardNumber, tr("companyCardNumber"));
}

