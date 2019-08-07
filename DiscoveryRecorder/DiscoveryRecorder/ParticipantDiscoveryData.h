#pragma once

#include <vector>
#include "Guid.h"


namespace Converter {
	class ParticipantDiscoveryData
	{
	public:
		ParticipantDiscoveryData();
		~ParticipantDiscoveryData();

		Guid ParticipantGuid;
		// list of <propertyName, propertyValue>
		std::vector<std::pair< std::string, std::string>> propertyList;

		// unicast locators
		// lease duration

		std::string entityName;
		std::string roleName;
		unsigned int domainId;
	};
}

