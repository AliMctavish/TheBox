#pragma once
#include "SFML/Graphics.hpp"
#include "Map.h"
#include "Ground.h"


class Player {
public: 

	//SFML VARIABLES
	sf::Vector2f playerPos;
	sf::Color playerColor = sf::Color::Blue;
	sf::RectangleShape playerTexture;
	//TIME
	sf::Clock clickTimer;

	//BOOLEAN VALUES
	bool collided = false;
	bool isClicked = false;

	//CLICK TIMER 
	int clickCoolDown;

	//INIT PLAYER POSITION AND CONSTRUCTOR
	int playerMovingOnX, playerMovingOnY;
	Player(float x , float y); 

	//INIT VARIABLES
	void initVariables();

	void PlayerControls();


	//UPDATE METHODS
	void Update();
	void render();
};
