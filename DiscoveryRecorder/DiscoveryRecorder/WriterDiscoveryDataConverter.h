#pragma once
#include "WriterDiscoveryData.h"
namespace Converter {
	class WriterDiscoveryDataConverter
	{
	public:
		WriterDiscoveryDataConverter();
		~WriterDiscoveryDataConverter();

		WriterDiscoveryData convert(const unsigned char* data);
	};
}

