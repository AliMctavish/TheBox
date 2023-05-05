#include "Physics.h"

void Physics::GroundColliders(Map& map , Player& player)
{
	for (auto& ground : map.grounds)
	{
		if (ground.groundTexture.getGlobalBounds().contains(sf::Vector2f(player.playerTexture.getPosition().x+50, player.playerTexture.getPosition().y + 50)))
		{
			player.playerTexture.move(0,-1);
		}
	}
}

