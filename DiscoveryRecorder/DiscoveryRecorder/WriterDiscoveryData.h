#pragma once
#include <string>
#include <vector>
#include <utility>
#include <ios>
#include <iosfwd>
#include <sstream>
#include <iomanip>

namespace Converter {
	class WriterDiscoveryData
	{
	public:
		WriterDiscoveryData();
		~WriterDiscoveryData();

		EndPointGuid endPointGuid;
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

	class EndPointGuid
	{
	public:
		EndPointGuid();
		~EndPointGuid();

		unsigned int hostId;
		unsigned int appId;
		unsigned int instanceId;
		unsigned int entityId;

		std::string To_String()
		{
			std::stringstream stream;
			stream << "0x"
				<< std::setfill('0') << std::setw(sizeof(unsigned int) * 2)
				<< std::hex << hostId
				<< std::setfill('0') << std::setw(sizeof(unsigned int) * 2)
				<< std::hex << appId
				<< std::setfill('0') << std::setw(sizeof(unsigned int) * 2)
				<< std::hex << instanceId
				<< std::setfill('0') << std::setw(sizeof(unsigned int) * 2)
				<< std::hex << entityId;
			return stream.str();
		}
	};
}

