#include "ZombieEvent.hpp"
#include <iostream>

ZombieEvent::ZombieEvent()
{
	type = "default";
	srand(time(NULL));
}

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie* zombie = new Zombie(type, name);
	return (zombie);
}

Zombie* ZombieEvent::randomChump(void)
{
	std::string name_list[9] = {"Polarbear", "Holly", "Taeng", "Hong", "SongPD",
                                "STARK", "IGO", "Olivia", "Dall"};
	Zombie *zombie = newZombie(name_list[rand() % 9]);
	zombie->announce();
	return (zombie);
}