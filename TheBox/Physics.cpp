#include "Physics.h"

void Physics::GroundColliders(Map& map , Player& player)
{


	for (auto& ground : map.grounds)
	{
		//int x1 = ground.groundTexture.getPosition().x;
		//int x2 = player.playerTexture.getPosition().x;
		//int y1 = ground.groundTexture.getPosition().y;
		//int y2 = player.playerTexture.getPosition().y;

		int leftRect1   =  ground.groundTexture.getPosition().x;
		int rightRect1  =  ground.groundTexture.getPosition().x + 50;
		int topRect1    =  ground.groundTexture.getPosition().y;
		int buttomRect1 =  ground.groundTexture.getPosition().y - 50;
		int leftRect2   =  player.playerTexture.getPosition().x;
		int rightRect2  =  player.playerTexture.getPosition().x + 50;
		int topRect2    =  player.playerTexture.getPosition().y;
		int buttomRect2 =  player.playerTexture.getPosition().y - 50;
		

		if (leftRect2 < rightRect1 && leftRect1 < rightRect2 && buttomRect2 < topRect1 && buttomRect1 < topRect2)
		{
			sf::FloatRect location1 = ground.groundTexture.getGlobalBounds();
			sf::FloatRect location2 = player.playerTexture.getGlobalBounds();

			if (location1.height < location2.height)
			{

			}

		}


		//int distance = sqrt((x2 - x1) ^ 2 + (y2 - y1));

		//x2 * x1 + x1 * x1 ;

		if (ground.groundTexture.getGlobalBounds().intersects(player.playerTexture.getGlobalBounds()))
		{
		//	player.collided = true;
			if (player.playerTexture.getGlobalBounds().intersects(ground.groundTexture.getGlobalBounds()))
			{

			}
		}
	}
}

