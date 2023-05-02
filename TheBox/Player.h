#pragma once
#include "SFML/Graphics.hpp"

class Player {
public: 

	sf::Vector2f playerPos;

	sf::RectangleShape playerTexture;

	Player(float x , float y); 

	void initVariables();

	void Update(sf::Time& timer);


	void render();



};
