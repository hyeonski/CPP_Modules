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
	if (this != &plasmaRifle)
	{
		this->_name = plasmaRifle.getName();
		this->_APCost = plasmaRifle.getAPCost();
		this->_damage = plasmaRifle.getDamage();
	}
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{

}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu poiuuu poiuuu *" << std::endl;
}