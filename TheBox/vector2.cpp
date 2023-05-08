#include "vector2.h"

namespace gtp
{
	Vector2 gtp::normalize(Vector2 Target, Vector2 Current)
	{
		Vector2 _Normal;
		float SlopeX = Target.x - Current.x;
		float SlopeY = Target.y - Current.y;
		if ((SlopeY == 1) || (SlopeY == -1))
		{
			_Normal.y = SlopeY;
			_Normal.x = SlopeX;
		}
		else
		{
			_Normal.y = (SlopeY / SlopeY);
			_Normal.x = (SlopeX / SlopeY);
		}
		return _Normal;
	}
}