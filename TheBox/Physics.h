#pragma once
#include "Player.h"
#include <math.h>
#include "Bomb.h"

class Physics {
public :
	bool isCollided(Map& map, Player& player);
	void BombPlanted();
};
