#include "Game.h"

void Game::initVariables() 
{
	this->window = nullptr;
}

void Game::initMap()
{
	this->map.CreateMap();
}

void Game::initWindow()
{
	this->videoMode.height = 600;
	this->videoMode.width = 1200;
	this->window = new sf::RenderWindow(this->videoMode, "The Box Game", sf::Style::Titlebar | sf::Style::Close);
	this->window->setFramerateLimit(144);
}

Game::Game()
{
	this->initVariables();
	this->initWindow();
	this->initMap();
}

Game::~Game()
{
	delete this->window;
}


void Game::pollEvents()
{
	while (this->window->pollEvent(this->ev))
	{
		if (sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			this->window->close();
			break;
		}
	}
}

void Game::Update()
{
	this->pollEvents();
	this->player.Update();
	this->physics.GroundColliders(this->map , this->player);
}

void Game::render()
{
	this->window->clear(sf::Color::Black);

	this->window->draw(this->player.playerTexture);

	for (auto& drawMap : this->map.grounds)
	{
		this->window->draw(drawMap.groundTexture);
	}

	this->window->display();
}