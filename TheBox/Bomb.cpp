#include "Bomb.h"

void Bomb::init()
{


}


void Bomb::Planted()
{
	this->isTicking = true;
}

Bomb::Bomb(int posX,int posY)
{
	this->texutre = new sf::Texture();
	this->sinCounter = 1;

	if (!this->texutre->loadFromFile("BombTexture.png"))
	{
		std::cout << "somthing went wrong";
	}
	rect.setTexture(texutre);
	rect.setPosition(sf::Vector2f(posX, posY));
	rect.setSize(sf::Vector2f(60, 60));
}
void Bomb::update()
{
	this->sinCounter++;
	this->sinResult = sin(sinCounter/2) * 100;
	std::cout << this->sinResult << std::endl;
	rect.setSize(sf::Vector2f(this->sinResult/2,this->sinResult/2));
}

Bomb::~Bomb()
{

}