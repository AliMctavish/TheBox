#pragma once
#include "SFML/Graphics.hpp"
#include "Player.h"
#include "Physics.h"
#include "Ground.h"
#include "Map.h"
#include "Bomb.h"





class Game {

public :
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event ev;
	sf::Font myFont;

	Player player = Player(20,20);
	Ground ground = Ground(2,2);
	Map map;
	Physics physics;
	sf::Clock clock;
	sf::Clock bouncingClock;
	sf::Time timer;
	std::vector<Bomb> bombs;
	
	//FPS COUNTER
	float lastTime = 0;
	bool isClicked = false;
	int clickTimer = 1;
	float bouncingBombTimer = 0.5f; 
	

	const bool isRunning()  const { return this->window->isOpen() ; }

	Game();

	virtual ~Game();

	void initVariables();
	void initWindow();
	void initMap();
	void AddBomb();

	void pollEvents();

	void Update();
	void updateBombs();

	void render();
};
