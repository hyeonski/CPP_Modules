#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap() : FragTrap(), NinjaTrap()
{
	this->name = "defaul-super";
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	std::cout << this->hitPoints << std::endl;
	std::cout << this->maxHitPoints << std::endl;
	std::cout << this->energyPoints << std::endl;
	std::cout << this->maxEnergyPoints << std::endl;
	std::cout << this->level << std::endl;
	std::cout << this->name << std::endl;
	std::cout << this->meleeAttackDamage << std::endl;
	std::cout << this->rangedAttackDamage << std::endl;

	std::cout << "SUP3R-TP <" << name << "> Created by default constructor!" << std::endl;
}

// NinjaTrap::NinjaTrap(const std::string& name) : ClapTrap(name)
// {
// 	this->hitPoints = 60;
// 	this->maxHitPoints = 60;
// 	this->energyPoints = 120;
// 	this->meleeAttackDamage = 60;
// 	this->armorDamageReduction = 0;

// 	std::cout << "NINJ4-TP <" << name << "> Created by name constructor!" << std::endl;	
// }

// NinjaTrap::NinjaTrap(const NinjaTrap& ninjaTrap) : ClapTrap(ninjaTrap)
// {
// 	std::cout << "NINJ4-TP <" << name << "> Created by copy constructor!" << std::endl;
// }

SuperTrap::~SuperTrap()
{
	std::cout << "SUP3R-TP <" << name << "> Destroyed!" << std::endl;
}

// NinjaTrap& NinjaTrap::operator=(const NinjaTrap& ninjaTrap)
// {
// 	ClapTrap::operator=(ninjaTrap);
// 	std::cout << "NINJ4-TP <" << name << "> Assigned!" << std::endl;
// 	return (*this);
// }

// void NinjaTrap::ninjaShoebox(const FragTrap& fragTrap)
// {
// 	std::cout << "NINJ4-TP <" << getName() << "> Used Special Attack to " << "FR4G-TP <" << fragTrap.getName() << ">" << std::endl;
// }

// void NinjaTrap::ninjaShoebox(const ScavTrap& scavTrap)
// {
// 	std::cout << "NINJ4-TP <" << getName() << "> Used Special Attack to " << "SC4V-TP <" << scavTrap.getName() << ">" << std::endl;
// }

// void NinjaTrap::ninjaShoebox(const ClapTrap& clapTrap)
// {
// 	std::cout << "NINJ4-TP <" << getName() << "> Used Special Attack to " << "CL4P-TP <" << clapTrap.getName() << ">" << std::endl;
// }

// void NinjaTrap::ninjaShoebox(const NinjaTrap& ninjaTrap)
// {
// 	std::cout << "NINJ4-TP <" << getName() << "> Used Special Attack to " << "NINJ4-TP <" << ninjaTrap.getName() << ">" << std::endl;
// }
