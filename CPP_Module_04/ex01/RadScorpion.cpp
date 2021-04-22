#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &radScorpion) : Enemy(radScorpion)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &radScorpion)
{
	Enemy::operator=(radScorpion);
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout <<"* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
}