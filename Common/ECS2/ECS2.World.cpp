#include <Common/ECS2/ECS2.World.hpp>
//
#include <Common/ECS2/OksEngine.ECS.Component.Utils.hpp>

namespace ECS2 {
	std::string SerializeEntity(World* world, ECS2::Entity::Id entityId) {

		std::shared_ptr<World> worldPtr{ world , [](World*) {
				
			//do nothing
			
			} };

		return ::SerializeEntity(worldPtr, entityId);
		//return "";

	}
}