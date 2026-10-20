#pragma once 

#include <ECS2.World.hpp>

#include <Lua.Context.hpp>

#include <auto_ecs_generator3.Project.hpp>

namespace OksEngine {

	class EntityId {
	public:

		void SetId(std::uint64_t id);

		std::uint64_t GetId();

	private:
		ECS2::Entity::Id id_ = ECS2::Entity::Id::invalid_;
	};


	void BindEntityId(::Lua::Context& context);

}