#include "Game.h"



void Game::initVariables() 
{
	this->window = nullptr;
}



void Game::initWindow()
{
	this->videoMode.height = 600;
	this->videoMode.width = 1200;
	this->window = new sf::RenderWindow(this->videoMode, "The Box Game", sf::Style::Titlebar | sf::Style::Close);
}




Game::Game()
{
	this->initVariables();
	this->initWindow();
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
}


void Game::render()
{
	this->window->clear(sf::Color::Black);

	this->window->display();
}