#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{

}

PowerFist::PowerFist(const PowerFist &powerFist) : AWeapon(powerFist)
{

}

PowerFist &PowerFist::operator=(const PowerFist &powerFist)
{
	AWeapon::operator=(powerFist);
	return (*this);
}

PowerFist::~PowerFist()
{

}

void PowerFist::attack() const
{
	std::cout <<"* pschhh... SBAM! *" << std::endl;
}