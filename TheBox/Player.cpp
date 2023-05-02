#include "Player.h"


Player::Player(float x, float y)
{
	this->playerTexture.setPosition(x, y);
	this->playerTexture.setOutlineColor(sf::Color::White);
	this->playerTexture.setOutlineThickness(2);
	this->playerTexture.setSize(sf::Vector2f(50,50));
	this->playerTexture.setFillColor(sf::Color::Blue);
 }

void Player::Update(sf::Time& timer)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		this->playerTexture.move(-5 , 0);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		this->playerTexture.move(5 , 0);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		this->playerTexture.move(0, -5 );
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		this->playerTexture.move(0, 5 );
}








