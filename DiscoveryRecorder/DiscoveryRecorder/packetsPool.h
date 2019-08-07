#pragma once
#include <iostream>
#include <List>
using std::list;
class packet;

template <class T>
class packetsPool{
	static packetsPool *instance;
	list<T> *packetList;

	packetsPool() {
		packetList = new list<T>();
	}

public:
	virtual static packetsPool* getInstance() = 0;
	virtual void push(T p1) = 0;
	virtual T pop() = 0;
};


