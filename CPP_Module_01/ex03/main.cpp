#include "ZombieHorde.hpp"

int main(void)
{
	ZombieHorde* zombieHorde = new ZombieHorde(5);
	zombieHorde->announce();
	delete zombieHorde;
	return 0;
}