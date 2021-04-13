#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	this->type = "default";
	this->name = "default";
}

Zombie::Zombie(std::string type, std::string name)
{
	this->type = type;
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> " << "Braiiiiiiinnnssss..." << std::endl;
}