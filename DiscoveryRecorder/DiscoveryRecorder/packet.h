#pragma once
#include <pcap.h>

class packet {
public:
	struct pcap_pkthdr* header;
	const u_char* pkt_data;

	~packet() {
		delete header;
		delete[] pkt_data;
	}
};