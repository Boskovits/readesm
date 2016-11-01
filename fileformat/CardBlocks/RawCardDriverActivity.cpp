#include "RawCardDriverActivity.h"


/** \file 
\brief auto-generated file for RawCardDriverActivity

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/





RawCardDriverActivity::RawCardDriverActivity(const DataPointer& filewalker) : CardBlock(filewalker),
	oldestRecord(readBigEndianInt2(start + 5 )),
	newestRecord(readBigEndianInt2(start + 7 )),
	cyclicData(start + 9 , dataBlockSize() - (9 ))
{}

QString RawCardDriverActivity::className() const {
	return "RawCardDriverActivity";
}

QString RawCardDriverActivity::title() const {
	return tr("Driver Activity Data");
}

void RawCardDriverActivity::printOn(Reporter& report) const {
	report.tagValuePair(tr("oldestRecord"), oldestRecord);
	report.tagValuePair(tr("newestRecord"), newestRecord);
	report.tagValuePair(tr("cyclicData"), cyclicData.toString());if(size() != 9 ){ report.tagValuePair("should have", 9 ); report.tagValuePair("has", size()); }
}

