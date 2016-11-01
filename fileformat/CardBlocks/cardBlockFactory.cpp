#include "cardBlockFactory.h"


/** \file 
\brief auto-generated file for cardBlockFactory

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include "LastCardDownload.h"
#include "CardPlaceDailyWorkPeriod.h"
#include "CardCertificate.h"
#include "CardIccIdentification.h"
#include "CardVehiclesUsed.h"
#include "DriverCardApplicationIdentification.h"
#include "SpecificConditions.h"
#include "CardDriverActivity.h"
#include "CardCurrentUse.h"
#include "CardFaultData.h"
#include "MemberStateCertificate.h"
#include "CardEventData.h"
#include "CardChipIdentification.h"
#include "CardControlActivityDataRecord.h"
#include "CardDrivingLicenseInformation.h"
#include "Identification.h"

QSharedPointer<CardBlock> cardBlockFactory(const DataPointer& start){
	if(start.bytesLeft() < 5) return QSharedPointer<CardBlock>();
	switch(readBigEndianInt2(start)) {
		case DriverCardApplicationIdentification::Type: return QSharedPointer<DriverCardApplicationIdentification>(new DriverCardApplicationIdentification(start));
		case LastCardDownload::Type: return QSharedPointer<LastCardDownload>(new LastCardDownload(start));
		case CardDrivingLicenseInformation::Type: return QSharedPointer<CardDrivingLicenseInformation>(new CardDrivingLicenseInformation(start));
		case Identification::Type: return QSharedPointer<Identification>(new Identification(start));
		case CardCurrentUse::Type: return QSharedPointer<CardCurrentUse>(new CardCurrentUse(start));
		case CardChipIdentification::Type: return QSharedPointer<CardChipIdentification>(new CardChipIdentification(start));
		case CardIccIdentification::Type: return QSharedPointer<CardIccIdentification>(new CardIccIdentification(start));
		case CardControlActivityDataRecord::Type: return QSharedPointer<CardControlActivityDataRecord>(new CardControlActivityDataRecord(start));
		case CardDriverActivity::Type: return QSharedPointer<CardDriverActivity>(new CardDriverActivity(start));
		case CardEventData::Type: return QSharedPointer<CardEventData>(new CardEventData(start));
		case CardFaultData::Type: return QSharedPointer<CardFaultData>(new CardFaultData(start));
		case SpecificConditions::Type: return QSharedPointer<SpecificConditions>(new SpecificConditions(start));
		case MemberStateCertificate::Type: return QSharedPointer<MemberStateCertificate>(new MemberStateCertificate(start));
		case CardCertificate::Type: return QSharedPointer<CardCertificate>(new CardCertificate(start));
		case CardPlaceDailyWorkPeriod::Type: return QSharedPointer<CardPlaceDailyWorkPeriod>(new CardPlaceDailyWorkPeriod(start));
		case CardVehiclesUsed::Type: return QSharedPointer<CardVehiclesUsed>(new CardVehiclesUsed(start));
		default: return QSharedPointer<CardBlock>(new CardBlock(start));
	}
}

