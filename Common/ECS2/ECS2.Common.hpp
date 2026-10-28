#pragma once 

#include <optional>
#include <memory>

#include <Common/OS/OS.Assert.MTCheck.hpp>

namespace ECS2 {

	template<class Type>
	using Maybe = std::optional<Type>;

	template<class Type>
	using Ptr = std::shared_ptr<Type>;

}