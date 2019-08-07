#pragma once
#include <string>
#include <vector>
#include "Guid.h"

namespace Converter {
	class WriterDiscoveryData
	{
	public:
		WriterDiscoveryData();
		~WriterDiscoveryData();

		Guid endPointGuid;
		std::string topicName;
		std::string typeName;

		// reliablity
		// liveliness
		// durability
		// ownership
		// presentation
		// destination order
		// deadline
		
		// list of <propertyName, propertyValue>
		std::vector<std::pair< std::string, std::string>> propertyList;
		std::string roleName;
		std::string entityName;
	};
}

