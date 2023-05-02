#pragma once
#include "SFML/Graphics.hpp"
#include "Player.h"


class Game {

public :

	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event ev;
	sf::Time timer;
	
	Player player = Player(20,20);

	const bool isRunning()  const { return this->window->isOpen() ; }

	Game();

	virtual ~Game();

	void initVariables();
	void initWindow();


	void pollEvents();

	void Update();

	void render();

};
