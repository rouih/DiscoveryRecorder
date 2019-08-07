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
	static packetsPool* getInstance();
	virtual void push(T p1);
	virtual T pop();
};


