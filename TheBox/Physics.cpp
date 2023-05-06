#include "Physics.h"

void Physics::GroundColliders(Map& map , Player& player)
{

}
bool Physics::isCollided(Map& map, Player& player)
{
	for (auto& ground : map.grounds)
	{
		int leftRect1 = ground.groundTexture.getPosition().x;
		int rightRect1 = ground.groundTexture.getPosition().x + 50;
		int topRect1 = ground.groundTexture.getPosition().y;
		int buttomRect1 = ground.groundTexture.getPosition().y - 50;
		int leftRect2 = player.playerTexture.getPosition().x;
		int rightRect2 = player.playerTexture.getPosition().x + 50;
		int topRect2 = player.playerTexture.getPosition().y;
		int buttomRect2 = player.playerTexture.getPosition().y - 50;


		if (leftRect2 < rightRect1 && leftRect1 < rightRect2 && buttomRect2 < topRect1 && buttomRect1 < topRect2)
		{
			return true;
		}
	}
	return false;
}



