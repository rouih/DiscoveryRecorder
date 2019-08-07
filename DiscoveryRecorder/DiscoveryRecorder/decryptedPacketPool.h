#pragma once
#include "decryptedRtpsPacket.h"

template <class T>
class decryptedPacketPool : public packetsPool {

	decryptedPacketPool* getInstance()
	{
		if (!decryptedPacketPool::instance)
			decryptedPacketPool::instance = new packetsPool();
		return decryptedPacketPool::instance;
	}

	void push(decryptedRtpsPacket p1)
	{
		this->packetList->push_back(p1);
	}

	list<decryptedRtpsPacket> pop()
	{
		return *this->packetList->pop_front;
	}
};

