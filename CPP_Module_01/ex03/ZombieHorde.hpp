#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie *zombies;
	int numZombies;
public:
	ZombieHorde(int n);
	~ZombieHorde();
	void announce();
};

#endif