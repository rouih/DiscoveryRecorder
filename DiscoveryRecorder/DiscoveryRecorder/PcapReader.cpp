
#include "PcapReader.h"
#include <iostream>
#include "packet.h"

//unsigned long retrieveNetMask(pcap_t* adap) {
//	unsigned long netmask = 0xffffff;
//	netmask = ((struct  sockaddr_in*)(adap->addresses->netmask))->sin_addr.S_un.S_addr;
//	{
//
//	};))
//}

void PcapReader::read()
{
	char errbuff[PCAP_ERRBUF_SIZE];
	pcap_t* pcap = pcap_open_offline(_fileName.c_str(), errbuff);
	struct bpf_program pgm;
	if (pcap_compile(pcap, &pgm, "udp[8] == 0x52 and udp[9] == 0x54 and udp[10] == 0x50 and udp[11] == 0x53", 1, 0xffffff) < 0) {
		return;
	}
	if (pcap_setfilter(pcap, &pgm) < 0) {
		return;
	}
	
	struct pcap_pkthdr* header;

	const u_char* data = NULL;
	/*
	* Step 6 - Loop through packets and print them to screen
	*/
	unsigned int packetCount = 0;
	while (int returnValue = pcap_next_ex(pcap, &header, &data) >= 0)
	{
		/*packet* p = new packet();
		struct pcap_pkthdr* pHeader = new pcap_pkthdr();
		const u_char* pData = new const u_char[header->caplen];

		memcpy(pHeader, header, sizeof(struct pcap_pkthdr));
		memcpy(&pData, &data, header->caplen);*/
		

		packet* p = new packet();
		p->header = new pcap_pkthdr();
		p->pkt_data = new const u_char[header->caplen];

		*(p->header) = *header;
		memcpy(&p->pkt_data, &data, header->caplen);


		for (int i = 0; i < p->header->caplen; i++) {
			std::cout << p->pkt_data[i];
		}
		delete p;
	}
}

PcapReader::PcapReader(string s) : _fileName(s)
{
}
