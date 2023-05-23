#include "Bomb.h"

void Bomb::init()
{


}

Bomb::Bomb(int posX,int posY)
{
	if (!this->texutre.loadFromFile("BombTexture.png"))
	{
		std::cout << "somthing went wrong";
	}
	rect.setTexture(&texutre);
	rect.setPosition(posX, posY);
	rect.setSize(sf::Vector2f(139, 139));
	rect.setOutlineThickness(2);
}

Bomb::~Bomb()
{

}