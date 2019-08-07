
#include "JsonObjectSerlizer.h"
#include <functional>
#include <string>

using nlohmann::json;

void Converter::JsonObjectSerializer::to_json(json& j, const WriterDiscoveryData& writer) {
	Guid endPGUID = writer.endPointGuid;
	j = json{
		{
			"Guid:",{"HostID:",endPGUID.hostId},{"App ID:",endPGUID.appId},
				{"Entity ID:",endPGUID.entityId},
				{"Instance ID:",endPGUID.instanceId}
		},{
			"Topic Name:",writer.topicName
		},{
			"Role Name:",writer.roleName
		},{"Property List:"}
	};
}



