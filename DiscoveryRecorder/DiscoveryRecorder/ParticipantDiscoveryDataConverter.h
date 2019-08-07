#pragma once
#include "ParticipantDiscoveryData.h"
namespace Converter {
	class ParticipantDiscoveryDataConverter
	{
	public:
		ParticipantDiscoveryDataConverter();
		~ParticipantDiscoveryDataConverter();

		ParticipantDiscoveryData convert(const unsigned char* data);
	};
}

