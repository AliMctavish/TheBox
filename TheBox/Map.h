#pragma once
#include "SFML/Graphics.hpp"
#include <vector>
#include "Ground.h"

class Map {
public : 
	std::vector<Ground> grounds;
	void CreateMap();
};
