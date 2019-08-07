#pragma once
#include <string>
#include <pcap.h>
using std::string;
class PcapReader {
	string _fileName;

public:
	void read();
	PcapReader(string);

};