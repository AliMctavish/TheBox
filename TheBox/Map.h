#pragma once
#include "SFML/Graphics.hpp"
#include <vector>
#include "Ground.h"

class Map {
public : 
	static std::vector<Ground> grounds;
	void CreateMap();
	std::vector<std::string> maps(int level);
};
