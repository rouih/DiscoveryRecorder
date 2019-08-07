#pragma once
#include "WriterDiscoveryData.h"
#include <json/single_include/nlohmann/json.hpp>

namespace Converter
{
	
	class JsonObjectSerializer
	{
		void to_json(nlohmann::json& j, const WriterDiscoveryData& writer);
	};
}