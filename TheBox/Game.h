#pragma once
#include "SFML/Graphics.hpp"


class Game {

public :

	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event ev;

	const bool isRunning()  const { return this->window->isOpen() ; }

	Game();

	virtual ~Game();

	void initVariables();
	void initWindow();

	void pollEvents();

	void Update();

	void render();

};
