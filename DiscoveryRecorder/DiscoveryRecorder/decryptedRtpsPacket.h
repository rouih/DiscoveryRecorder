#pragma once
#include <string>
using std::string;

struct farmLayer {
	string timeStamp;
};
struct ipLayer {
	string srcIp;
	string destIp;
	string identitication;
};
struct udpLayer {
	string dstPort;
	string srcPort;

};
struct rtpsLayer {
	string guidPrefix;
	metaData MT;

};
struct metaData {
	int DomainId;
	int participantId;
};
struct submessage {
	string writer_entityId;
	string sequenceNum;
	short flages;
};

class decryptedRtpsPacket {
public:
	farmLayer framLayerl;
	rtpsLayer rtpsLayer;
	metaData metaData;
	submessage subMessage;
	udpLayer udpLayer;
	ipLayer ipLayer;

};