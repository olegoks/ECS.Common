#pragma once

#include <Common/Common.Types.hpp>
#include <Common/Math/Math.Common.hpp>

namespace Math {

	constexpr static Common::Double epsilon = 0.000001;

	[[nodiscard]]
	inline bool IsEqual(Common::Float first, Common::Float second) noexcept {
		return Abs<Common::Float>(first - second) < epsilon;
	}


	[[nodiscard]]
	inline bool IsLess(Common::Float first, Common::Float second) noexcept {
		return first < second + epsilon;
	}

}