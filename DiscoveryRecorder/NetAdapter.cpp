#include "NetAdapter.h"

unsigned long NetAdapter::retrieveMaskOffFirstAddressOfInterface()
{
	return 0;
}

NetAdapter::NetAdapter() :AbstractAdapter("","",NULL)
{
}

NetAdapter::NetAdapter(string name, string desc, pcap_if_t* orgAdapter) :AbstractAdapter(name, desc, orgAdapter)
{
}

pcap_t* NetAdapter::startLiveCapture(char* errBuff)
{
	_session = pcap_open_live(_name.c_str(), 65535, 1, 1000, errBuff);
	return _session;
}

void NetAdapter::closeCaptureSession()
{
	pcap_close(_session);
}
