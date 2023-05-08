#pragma once
namespace gtp
{
	struct Vector2
	{
		Vector2();
		Vector2(float x, float y);
		Vector2& operator=(const Vector2& param);
		float x;
		float y;
	};

	Vector2 normalize(Vector2 Target, Vector2 Current);
}