#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	name = "default-scav";

	std::cout << "SC4V-TP <" << name << "> Created by default constructor!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;

	std::cout << "SC4V-TP <" << name << "> Created by name constructor!" << std::endl;	
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap) : ClapTrap(scavTrap)
{
	std::cout << "SC4V-TP <" << name << "> Created by copy constructor!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP <" << name << "> Destroyed!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap)
{
	ClapTrap::operator=(scavTrap);
	std::cout << "SC4V-TP <" << name << "> Assigned!" << std::endl;
	return (*this);
}

void ScavTrap::challengeNewcomer(void)
{
	std::string challenges[] = {
		"Ice Bucket Challenge", "Food Fight", "Tour de Korea"
	};
	std::cout << "SC4V-TP <" << name << "> challenged " << challenges[rand() % 3] << std::endl;
}
