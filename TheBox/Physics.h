#pragma once
#include "Map.h"
#include "Player.h"
#include <math.h>

class Physics {
public :
	bool isCollided(Map& map, Player& player);
};
