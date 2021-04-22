#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &plasmaRifle) : AWeapon(plasmaRifle) 
{

}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &plasmaRifle)
{
	AWeapon::operator=(plasmaRifle);
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{

}


void PlasmaRifle::attack() const
{
	std::cout << "* piouuu poiuuu poiuuu *" << std::endl;
}