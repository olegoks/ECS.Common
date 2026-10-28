#pragma once

#include <Common/Common.Types.hpp>
#include <Common/OS/OS.Assert.hpp>

namespace Common {
    class Handle {
    public:
        Common::UInt64 value_ = 0;

        template<class Type>
        Type CastToType() {
            ASSERT(value_ != 0);
            return reinterpret_cast<Type>(value_);
        }

        template<class Type>
        Type* CastToPointerType() {
            ASSERT(value_ != 0);
            return reinterpret_cast<Type*>(value_);
        }

    };
}