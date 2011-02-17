/* Copyright 2009 Andreas Gölzer

 This file is part of readESM.

 readESM is free software: you can redistribute it and/or modify it under the
 terms of the GNU General Public License as published by the Free Software
 Foundation, either version 3 of the License, or (at your option) any later
 version.

 readESM is distributed in the hope that it will be useful, but WITHOUT ANY
 WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

 You should have received a copy of the GNU General Public License along with
 readESM.  If not, see <http://www.gnu.org/licenses/>. */

#ifndef ESMFILEHEAD_H
#define ESMFILEHEAD_H
#include <string>
#include "slurpedfile.h"
#ifndef HAVE_NO_CRYPTO
#include "crypto.h"
#endif
#include "time.h"

class esmfilehead {
	public:
	slurpedfile content;
	string title;
	Time first;
	Time last;
#ifndef HAVE_NO_CRYPTO
	shared_ptr<verifiedcert> CAcert;
	shared_ptr<verifiedcert> devicecert;
#endif
	void reportDate(const Time& torep) {
		if(torep < first) first = torep;
		if(torep > last) last = torep;
	}
	int daycount;
	int drivenkm;
	int drivenminutes;
	void reportDayStatistics(Time day, int daydrivenkm, int daydrivenminutes) {
		reportDate(day);
		++daycount;
		drivenkm += daydrivenkm;
		drivenminutes += daydrivenminutes;
	}
	esmfilehead(const string& filename) :
		content(slurp(filename)), first(0x7fFfFfFf), last(0), daycount(0),
				drivenkm(0), drivenminutes(0) {
	}
};

#endif