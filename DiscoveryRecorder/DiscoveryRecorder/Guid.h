#pragma once
#include <string>

namespace Converter {
	class Guid
	{
	public:
		Guid();
		~Guid();

		unsigned int hostId;
		unsigned int appId;
		unsigned int instanceId;
		unsigned int entityId;

		std::string toString();
	};
}

