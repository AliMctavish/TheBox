#pragma once
#include "Player.h"
#include <math.h>
#include "Map.h"

class Physics {
public :
	bool isCollided(Map& map, Player& player);
};
