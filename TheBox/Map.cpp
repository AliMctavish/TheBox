#include "Map.h"


void Map::CreateMap()
{
	
	std::vector<std::string> map = Map::maps(1);

	int countX(1);
	int countY(1);

	for (auto& i : map)
	{
		for (auto& j : i)
		{
			if (j == 'x')
			{
				Ground ground = Ground(countX,countY);
				countX += 50;
				this->grounds.push_back(ground);
			}
			else
				{
				countX += 50;
				std::cout << "x";
			}

		}
		countX = 1;
		countY += 50;
	}
}

std::vector<std::string> Map::maps(int level)
{
	std::vector<std::string> map;
	if (level == 1)
	{
	map = { "........................",
			"........................",
			"........................",
			"........................",
			"........................",
			"........................",
			"xxxxx...................",
			"....xxxxxxx..x..........",
			"..........x..xxxxxxxxxxx",
			"........................",
			"........................" };
	}
	if (level == 2)
	{
		map = { "........................",
				"........................",
				"........................",
				"........................",
				"........................",
				"........................",
				"........................",
				"xxxxxxx.........xxxxxxxx",
				"xxxxxxxxx.....xxxxxxxxxx",
				"xxxxxxxxxx...xxxxxxxxxxx",
				"xxxxxxxxxxx.xxxxxxxxxxxx",
				"xxxxxxxxxxx.xxxxxxxxxxxx" };
	}
	if (level == 3)
	{
		map = { "........................",
				"........................",
				"........................",
				"...........x............",
				"..........xxx...........",
				".........xxxxx..........",
				"........xxxxxxx.........",
				"xxxxxxxxxxxxxxxxxxxxxxxx",
				"xxxxxxxxx.....xxxxxxxxxx",
				"xxxxxxxxxx...xxxxxxxxxxx",
				"xxxxxxxxxxx.xxxxxxxxxxxx",
				"xxxxxxxxxxx.xxxxxxxxxxxx" };
	}

	return map;
}
