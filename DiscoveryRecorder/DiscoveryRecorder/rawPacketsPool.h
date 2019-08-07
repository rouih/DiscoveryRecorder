#pragma once

template <class T>
class rawPacketsPool : public packetsPool {

	rawPacketsPool* getInstance()
	{
		if (!rawPacketsPool::instance)
			rawPacketsPool::instance = new packetsPool();
		return rawPacketsPool::instance;
	}

	void push(packet p1)
	{
		this->packetList->push_back(p1);
	}

	list<packet> pop()
	{
		return *this->packetList->pop_front;
	}
};