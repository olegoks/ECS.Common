#pragma once

#include <cstdlib>
#include <map>
#include <string>

#include <Common/ECS2/ECS2.Common.hpp>

#include <Common/Common.Types.hpp>

//#include <Common/ECS2/ECS2.hpp>

namespace ECS2 {

	using ComponentTypeId = Common::TypeId;

	extern ComponentTypeId nextId;

	template<class Type = int>
	class IComponent {
	public:



	};


}