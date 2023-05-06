#pragma once
#include "Map.h"
#include "Player.h"
#include <math.h>

class Physics {
public :
	void GroundColliders(Map& map , Player& player);
	bool isCollided(Map& map, Player& player);
};
