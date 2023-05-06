#pragma once
#include "SFML/Graphics.hpp"

class Player {
public: 

	sf::Vector2f playerPos;
	sf::Color playerColor = sf::Color::Blue;
	sf::RectangleShape playerTexture;
	bool collided = false;
	int playerMovingOnX, playerMovingOnY;

	Player(float x , float y); 

	void initVariables();

	void Update();


	void render();



};
