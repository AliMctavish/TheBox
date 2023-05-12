#include "Player.h"


void Player::initVariables()
{
	this->playerMovingOnX = 2;
	this->playerMovingOnY = 2;
	this->playerColor = sf::Color::Blue;
	this->clickCoolDown = 2;
	this->clickTimer.getElapsedTime();
}


Player::Player(float x, float y)
{
	this->initVariables();
	this->playerTexture.setPosition(x, y);
	this->playerTexture.setOutlineColor(sf::Color::White);
	this->playerTexture.setOutlineThickness(2);
	this->playerTexture.setSize(sf::Vector2f(50, 50));
	this->playerTexture.setFillColor(this->playerColor);
}

void Player::Update(Map& map)
{
	if (this->isClicked)
	{
		this->clickCoolDown = (int)this->clickTimer.getElapsedTime().asSeconds();

		if (this->clickCoolDown > 2)
		{
			this->clickTimer.restart();
			this->clickCoolDown = 0;
			this->isClicked = false;
		}
	}


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		this->playerTexture.move(-this->playerMovingOnX, 0);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		this->playerTexture.move(this->playerMovingOnX, 0);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		this->playerTexture.move(0, -this->playerMovingOnY);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		this->playerTexture.move(0, this->playerMovingOnY);
 	if (sf::Keyboard::isKeyPressed(sf::Keyboard::E) && !this->isClicked )
	{
		this->isClicked = true;
		Ground ground(this->playerTexture.getPosition().x, this->playerTexture.getPosition().y);
		map.grounds.push_back(ground);
	}


	if (this->collided)
	{

	}
}








