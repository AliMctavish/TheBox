#include "Player.h"


Player::Player(float x, float y)
{
	this->playerTexture.setPosition(x, y);
	this->playerTexture.setOutlineColor(sf::Color::White);
	this->playerTexture.setOutlineThickness(2);
	this->playerTexture.setSize(sf::Vector2f(50,50));
	this->playerTexture.setFillColor(sf::Color::Blue);
 }

void Player::Update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		this->playerTexture.move(-2, 0);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		this->playerTexture.move(2 , 0);

	this->playerTexture.move(0, 1);

}








