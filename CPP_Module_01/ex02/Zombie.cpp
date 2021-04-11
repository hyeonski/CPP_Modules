#include "Zombie.hpp"
#include <iostream>

void Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> " << "Braiiiiiiinnnssss..." << std::endl;
}