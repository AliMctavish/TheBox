#include "Ground.h"


Ground::Ground(int x , int y)
{
	this->groundTexture.setPosition(x,y);	
	this->groundTexture.setOutlineThickness(2);
	this->groundTexture.setSize(sf::Vector2f(50, 50));
	this->groundTexture.setFillColor(sf::Color::White);
	this->groundTexture.setOutlineColor(sf::Color::Red);
}


void Ground::Update()
{
	//for (auto& ground : Map::grounds)
	//{

	//}
}






