#include "Map.h"


void Map::CreateMap()
{
	std::vector<std::string> map;

	map = { "........",
			"........",
			"........",
			"..xxxx..",
			"........" };

	int countX(1);
	int countY(1);


	for (auto& i : map)
	{
		for (auto& j : i)
		{
			if (j == 'x')
			{
				countX += 50;
				Ground ground = Ground(countX,countY);
				this->grounds.push_back(ground);
			}
			else
			{

				std::cout << "x";
			}
		}
		countY += 50;
	}

}