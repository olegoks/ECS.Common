#pragma once

#include <Common/Common.Types.hpp>
#include <Common/Math/Math.Vector.hpp>
#include <Common/Math/Math.Matrix.hpp>

namespace Math {

	Vector3f TransformPoint(const Vector3f& point, const Matrix4x4f& transform);
	Vector3f TransformVector(const Vector3f& vector, const Matrix4x4f& transform);

}