#pragma once
#include <iostream>
#include "SFML/Graphics.hpp"
#include <math.h>
class Bomb {
private : 
	bool isTicking = false;

public : 
	//VARIABLES
	sf::Texture* texutre;
	sf::RectangleShape rect;
	sf::Vector2f position;
	sf::Clock bouncingClock;

	long double sinCounter;
	unsigned  sinResult;
	float bouncingBombTimer;


	void init();
	void Planted();

	Bomb(int posX , int posY);

	~Bomb();

	void update();

};