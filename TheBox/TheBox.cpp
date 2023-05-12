// TheBox.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Game.h"
#include "SFML/Graphics.hpp"



int main()
{
	Game game;
	while (game.isRunning())
	{
		game.Update();
		game.render();
	}

}