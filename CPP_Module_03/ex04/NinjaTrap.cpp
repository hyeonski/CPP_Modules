#include "NinjaTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap() : ClapTrap()
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->meleeAttackDamage = 5;
	this->armorDamageReduction = 0;
	name = "default-ninja";

	std::cout << "NINJ4-TP <" << name << "> Created by default constructor!" << std::endl;
}

NinjaTrap::NinjaTrap(const std::string& name) : ClapTrap(name)
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->meleeAttackDamage = 5;
	this->armorDamageReduction = 0;

	std::cout << "NINJ4-TP <" << name << "> Created by name constructor!" << std::endl;	
}

NinjaTrap::NinjaTrap(const NinjaTrap& ninjaTrap) : ClapTrap(ninjaTrap)
{
	std::cout << "NINJ4-TP <" << name << "> Created by copy constructor!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NINJ4-TP <" << name << "> Destroyed!" << std::endl;
}

NinjaTrap& NinjaTrap::operator=(const NinjaTrap& ninjaTrap)
{
	ClapTrap::operator=(ninjaTrap);
	std::cout << "NINJ4-TP <" << name << "> Assigned!" << std::endl;
	return (*this);
}

void NinjaTrap::ninjaShoebox(const FragTrap& fragTrap)
{
	std::cout << "NINJ4-TP <" << getName() << "> Used Special Attack to " << "FR4G-TP <" << fragTrap.getName() << ">" << std::endl;
}

void NinjaTrap::ninjaShoebox(const ScavTrap& scavTrap)
{
	std::cout << "NINJ4-TP <" << getName() << "> Used Special Attack to " << "SC4V-TP <" << scavTrap.getName() << ">" << std::endl;
}

void NinjaTrap::ninjaShoebox(const ClapTrap& clapTrap)
{
	std::cout << "NINJ4-TP <" << getName() << "> Used Special Attack to " << "CL4P-TP <" << clapTrap.getName() << ">" << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap& ninjaTrap)
{
	std::cout << "NINJ4-TP <" << getName() << "> Used Special Attack to " << "NINJ4-TP <" << ninjaTrap.getName() << ">" << std::endl;
}
