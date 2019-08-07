#pragma once
#include "IAdapter.h"


class SarigListener {
public:
	SarigListener(IAdapter* adapter);
	void fetchPackets();
	void start();
private:
	IAdapter* _adapter;
};