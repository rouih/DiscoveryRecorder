#pragma once
#include <string>
#include "AbstractAdapter.h"
using std::string;

class NetAdapter : public AbstractAdapter {
	string name, desc;
	pcap_if_t* orgAdapter;
	unsigned long retrieveMaskOffFirstAddressOfInterface();
public:
	NetAdapter();
	NetAdapter(string, string, pcap_if_t*);
	virtual pcap_t* startLiveCapture(char* errBuff) override;
	virtual void closeCaptureSession() override;

};