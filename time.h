#ifndef TIME_H
#define TIME_H TIME_H
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <time.h>

class Time{
	public:
	Time(int timestamp_ = 0) : timestamp(timestamp_){}
	static Time fromBigEndianChars32(const unsigned char* start){
		return Time((start[0] << 24) + (start[1] << 16) + (start[2] << 8) + start[3]); 
	}
	std::string str(std::string format = "%c %Z") const{
		if(timestamp == -1) return "(undefined)";
		char buffer[35];
		time_t t = timestamp;
		tm* timeinfo = localtime(&t);
		strftime(buffer, 35, format.c_str(), timeinfo);
		return buffer;
	}
	std::string datestr() const{
		return str("%F"); 
	}
	friend std::ostream& operator<<(std::ostream& o, const Time& d){
		return o << d.str();
	}
	bool operator>(const Time& other) const{ return timestamp > other.timestamp; }
	bool operator<(const Time& other) const{ return timestamp < other.timestamp; }

	int timestamp;
};

class Duration{
	public:
	///construct a duration from an int containing a duration in seconds
	Duration(int length_ = 0) : length(length_){}
	std::string str() const{
		std::ostringstream o;
		o << (*this);
		return o.str();
	}
	friend std::ostream& operator<<(std::ostream& o, const Duration& d){
		int l = d.length;
		if(l < 0){
			o << "-";
			l = -l;
		}
		return o << (l / 3600) << ":" << std::setw(2) << std::setfill('0') << ((l / 60) % 60) << ":" << std::setw(2) << std::setfill('0') << (l % 60);
	}
	int length;
};

Duration operator-(const Time& a, const Time& b){
	return Duration(a.timestamp - b.timestamp);
}



#endif
