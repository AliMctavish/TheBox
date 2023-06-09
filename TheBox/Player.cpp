#include "Player.h"


void Player::initVariables()
{
	this->playerMovingOnX = 2;
	this->playerMovingOnY = 2;
	this->playerColor = sf::Color::Blue;
	this->clickCoolDown = 2;
}


Player::Player(float x, float y)
{
	this->initVariables();
	this->texture.loadFromFile("BombTexture.png");
	this->playerTexture.setPosition(x, y);
	this->playerTexture.setOutlineColor(sf::Color::White);
	this->playerTexture.setOutlineThickness(2);
	this->playerTexture.setSize(sf::Vector2f(50, 50));
	this->playerTexture.setFillColor(this->playerColor);
}

void Player::Update()
{
	/*IF WE CLICKED THE "E" BUTTON WE WILL
	SPAWN AN ELEMENT IN THE PLAYER'S POSITION*/

	if (this->isClicked)
	{
		this->clickCoolDown = (int)this->clickTimer.getElapsedTime().asSeconds();

		if (this->clickCoolDown > 1)
		{
			this->clickTimer.restart();
			this->clickCoolDown = 0;
			this->isClicked = false;
 		}
	}

}

void Player::PlayerControls()
{
	//PLAYER MOVEMENTS
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		this->playerTexture.move(-this->playerMovingOnX, 0);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		this->playerTexture.move(this->playerMovingOnX, 0);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		this->playerTexture.move(0, -this->playerMovingOnY);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		this->playerTexture.move(0, this->playerMovingOnY);

	

	//ADDING BOX ON CLICKING "E" BUTTON
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::E) && !this->isClicked)
	{
		this->isClicked = true;
		Ground ground(this->playerTexture.getPosition().x, this->playerTexture.getPosition().y);
	}
}








