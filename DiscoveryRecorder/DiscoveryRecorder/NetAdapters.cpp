//#include "NetAdapters.h"
//
//NetAdapters::NetAdapters()
//{
//}
//
//NetAdapters::~NetAdapters()
//{
//	if (_pcapAdapters != NULL) {
//		pcap_freealldevs(_pcapAdapters);
//	}
//}
//
//vector<NetAdapter> NetAdapters::getNetAdapters()
//{
//	if (_adapters.empty()) {
//		char errBuff[256];
//		int res = pcap_findalldevs(&_pcapAdapters, errBuff);
//		if (res == -1) {
//			//TODO: THROW
//		}
//		buildAdaptersList(_pcapAdapters, &_adapters);
//	}
//	return _adapters;
//}
//
//void NetAdapters::buildAdaptersList(pcap_if_t* pcapAdapters, vector<NetAdapter>* adapters)
//{
//	for (auto curradp = _pcapAdapters; curradp != NULL; curradp = curradp->next) {
//		string currAdpName = curradp->name;
//		string currAdpDesc = curradp->description;
//		NetAdapter netAdap(currAdpName, currAdpDesc, curradp);
//		adapters->push_back(netAdap);
//	}
//}
