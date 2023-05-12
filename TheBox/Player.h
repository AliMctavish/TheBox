#pragma once
#include "SFML/Graphics.hpp"
#include "Map.h"
#include "Ground.h"


class Player {
public: 

	sf::Vector2f playerPos;
	sf::Color playerColor = sf::Color::Blue;
	sf::RectangleShape playerTexture;
	sf::Clock clickTimer;


	bool collided = false;
	bool isClicked = false;
	int clickCoolDown;
	int playerMovingOnX, playerMovingOnY;
	Player(float x , float y); 

	void initVariables();

	void Update(Map& map);


	void render();



};
