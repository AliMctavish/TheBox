#pragma once
#include "SFML/Graphics.hpp"
#include <iostream>
#include <vector>
#include "Map.h"


class Ground {
public :
	sf::RectangleShape groundTexture;
	sf::Vector2f groundPos;


	Ground(int x , int y);
	void Update();
};


