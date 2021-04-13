#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent zombieEvent;

	zombieEvent.setZombieType("WOW");
	for (int i = 0; i < 10; i++)
	{
		Zombie* zombie;
		zombie = zombieEvent.randomChump();
		delete zombie;
	}
	return (0);
}
