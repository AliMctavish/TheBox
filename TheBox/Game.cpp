#include "Game.h"




void Game::initVariables()
{
	this->window = nullptr;
	timer = clock.restart();

	if (!this->myFont.loadFromFile("Roboto-Regular.ttf"))
	{
		std::cout << "file not loaded";
	}
}

void Game::initMap()
{
	this->map.CreateMap();
}

void Game::initWindow()
{
	this->videoMode.height = 600;
	this->videoMode.width = 1200;
	this->window = new sf::RenderWindow(this->videoMode, "The Box Game", sf::Style::Titlebar | sf::Style::Close);
	this->window->setFramerateLimit(144);
}

Game::Game()
{
	this->initVariables();
	this->initWindow();
	this->initMap();

}

Game::~Game()
{
	for (auto& bomb : this->bombs)
		delete bomb.texutre;
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


void Game::AddBomb()
{
	Bomb bomb = Bomb(this->player.playerTexture.getPosition().x, this->player.playerTexture.getPosition().y);
	bomb.Planted();
	this->bombs.push_back(bomb);
}


void Game::Update()
{
	this->pollEvents();
	this->player.Update();
	this->player.PlayerControls();
	this->updateBombs();
	bool collided = this->physics.isCollided(this->map, this->player);
	if (collided == true)
	{
		player.playerTexture.setFillColor(sf::Color::Red);
	}
	else {
		player.playerTexture.setFillColor(sf::Color::Blue);
	}
}	

void Game::updateBombs()
{
	for (auto& bomb : this->bombs)
	{
		bomb.bouncingBombTimer = bomb.bouncingClock.getElapsedTime().asMicroseconds();
		if (bomb.bouncingBombTimer > 99000)
		{
		bomb.update();
		bomb.bouncingBombTimer = 0.1f;
		bomb.bouncingClock.restart();
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && !this->isClicked)
	{
		AddBomb();
		//this->isClicked = true;
	}

	if (this->isClicked)
	{
		std::cout << clock.getElapsedTime().asSeconds() << std::endl;

		this->clickTimer = clock.getElapsedTime().asSeconds();

		if (this->clickTimer > 2)
		{
			this->isClicked = false;
			clock.restart();
			this->clickTimer = 1;
		}
	}
}




void Game::render()
{
	this->window->clear(sf::Color::Black);
	this->window->draw(this->player.playerTexture);

	for (auto& bomb : this->bombs)
	{
		this->window->draw(bomb.rect);
	}

	for (auto& drawMap : map.grounds)
	{
		this->window->draw(drawMap.groundTexture);
	}


	//float currentTime = this->clock.restart().asSeconds();
	//float fps = 1.f / (currentTime - lastTime);
	//lastTime = currentTime * 10000;
	//std::cout << "fps : " << lastTime << std::endl;
	this->window->display();
}