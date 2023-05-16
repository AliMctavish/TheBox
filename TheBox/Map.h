#pragma once
#include "SFML/Graphics.hpp"
#include "Ground.h"
#include <vector>




class Map {
public : 
	std::vector<Ground> grounds;
	void CreateMap();
	std::vector<std::string> maps(int level);
};



