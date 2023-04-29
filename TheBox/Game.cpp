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
	this->DrawBox();
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


void Game::DrawBox()
{

}


void Game::Update()
{
	this->pollEvents();
}


void Game::render()
{
	this->window->clear(sf::Color::Black);
	sf::RectangleShape box;
	box.setFillColor(sf::Color::Red);
	box.setPosition(sf::Vector2f(2, 2));
	box.setSize(sf::Vector2f(5, 5));
	this->window->draw(box);
	this->window->display();
}