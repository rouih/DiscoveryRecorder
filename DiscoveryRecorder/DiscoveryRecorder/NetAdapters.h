#pragma once
#include <vector>
#include "NetAdapter.h"
using std::vector;

class NetAdapters {
public:
	NetAdapters();
	~NetAdapters();
	vector<NetAdapter> getNetAdapters();
private:
	vector<NetAdapter> _adapters;
	pcap_if_t* _pcapAdapters;
	void buildAdaptersList(pcap_if_t* pcapAdapters, vector<NetAdapter>* adapters);
};