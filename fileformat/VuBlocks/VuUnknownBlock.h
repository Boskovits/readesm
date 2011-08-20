#ifndef HEXBLOCk_H
#define HEXBLOCK_H

#include "VuBlock.h"

#include <QtCore/QString>
#include <QtCore/QTextStream>

/** This block is for debugging, in case the program encounters
 * some data it so far cannot read, it reports hex data and as
 * many useful information as possible **/
class VuUnknownBlock : public VuBlock {
	public:
	RawData data;
	VuUnknownBlock(constDataPointer start) :
		VuBlock(start), data(start, start.bytesLeft())
	{
		hasSignature = false;
	}

	virtual int size() const {
		return start.bytesLeft();
	}

	virtual QString name() const{
		return "Unknown block";
	}
	virtual void printOn(reporter& o) const {
		o.single("Oops! readesm encountered a chunk of data it cannot read.  Since the length of this chunk is also unknown, it cannot read the remaining file.");
		o("Block offset", QString("%1 (0x%2)")
					.arg(start.offset)
					.arg(start.offset, 8, 16, QChar('0')));
		o("Block size", QString("%1").arg(size()));
		o.single("If you are convinced readesm should be able to read this file, inform the author");
		o.single("Block hex data: " + data.toString());
	}

};

#endif