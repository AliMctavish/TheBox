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
	Bomb bomb = Bomb(40,40);
	std::vector<Bomb> bombs;
	
	//FPS COUNTER
	sf::Clock clock;
	float lastTime = 0;
	

	const bool isRunning()  const { return this->window->isOpen() ; }

	Game();

	virtual ~Game();

	void initVariables();
	void initWindow();
	void initMap();
	void AddBomb();

	void pollEvents();

	void Update();

	void render();
};
