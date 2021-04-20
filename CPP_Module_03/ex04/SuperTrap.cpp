#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap() : FragTrap(), NinjaTrap()
{
	this->name = "defaul-super";
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;

	std::cout << "SUP3R-TP <" << name << "> Created by default constructor!" << std::endl;
}

SuperTrap::SuperTrap(const std::string& name) : FragTrap(name), NinjaTrap(name)
{
	this->name = name;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;

	std::cout << "SUP3R-TP <" << name << "> Created by name constructor!" << std::endl;	
}

SuperTrap::SuperTrap(const SuperTrap& superTrap) : FragTrap(superTrap), NinjaTrap(superTrap)
{
	std::cout << "SUP3R-TP <" << name << "> Created by copy constructor!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SUP3R-TP <" << name << "> Destroyed!" << std::endl;
}

SuperTrap& SuperTrap::operator=(const SuperTrap& superTrap)
{
	FragTrap::operator=(superTrap);
	NinjaTrap::operator=(superTrap);
	std::cout << "SUP3R-TP <" << name << "> Assigned!" << std::endl;
	return (*this);
}

void SuperTrap::rangedAttack(const std::string& target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string& target)
{
	NinjaTrap::meleeAttack(target);
}