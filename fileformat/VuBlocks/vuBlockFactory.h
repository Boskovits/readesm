#ifndef VUBLOCKFACTORY_H
#define VUBLOCKFACTORY_H


/** \file 
\brief auto-generated file for vuBlockFactory

This file was AUTO-GENERATED.
Make changes in the generator script generate.py,
the data definitions in DataDefinitions.xml
or derive a class*/



#include <QtCore/QSharedPointer>
#include "VuUnknownBlock.h"
#include "VuBlock.h"

QSharedPointer<VuBlock> vuBlockFactory(const DataPointer& start);
#endif
