#include "ZombieHorde.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(int n)
{
	std::string name_list[] = {"Polarbear", "Holly", "Taeng", "Hong", "SongPD",
                                "STARK", "IGO", "Olivia", "Dall"};
	std::string type_list[] = {"Bocal", "STAFF"};
	srand(time(NULL));
	if (n < 1)
		n = 1;
	this->numZombies = n;
	this->zombies = new Zombie[n];
	for (int i = 0;i < n;i++)
	{
		zombies[i].setName(name_list[rand() % 9]);
		zombies[i].setType(type_list[rand() % 2]);
	}
}

void ZombieHorde::announce()
{
	for (int i = 0; i < numZombies; i++)
	{
		zombies[i].announce();
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] zombies;
}