#include "Guid.h"

#include <utility>
#include <ios>
#include <iosfwd>
#include <sstream>
#include <iomanip>

namespace Converter {

	Guid::Guid()
	{
	}


	Guid::~Guid()
	{
	}

	std::string Guid::toString()
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
}