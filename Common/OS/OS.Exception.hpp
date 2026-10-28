#pragma once

#include <Common/Common.Exception.hpp>
#include <Common/Common.Format.hpp>

namespace OS {
	class Exception : public Common::Exception {
	public:
		Exception(Common::Format format);
		Exception(const char* message);

	};
}