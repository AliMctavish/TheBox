#pragma once
#include <iostream>
#include "SFML/Graphics.hpp"
class Bomb {
public : 

	sf::Texture texutre;
	sf::RectangleShape rect;
	sf::Vector2f position;
	void init();

	Bomb(int posX , int posY);

	~Bomb();
};