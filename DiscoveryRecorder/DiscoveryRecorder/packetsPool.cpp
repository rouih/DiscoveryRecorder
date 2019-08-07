#include "packetsPool.h"
class rawPacketsPool :packetsPool {
	packetsPool* packetsPool::getInstance()
	{
		if (!packetsPool::instance)
			instance = new packetsPool();
	}

	void packetsPool::push(packet p1)
	{
		this->packetList->push_back(p1);
	}

	list<packet> packetsPool::pop()
	{
		return *this->packetList->pop_front;
	}

};
