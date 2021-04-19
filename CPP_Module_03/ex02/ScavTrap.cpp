#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 50;
	maxEnergyPoints = 50;
	level = 1;
	meleeAttackDamage = 20;
	rangedAttackDamage = 15;
	armorDamageReduction = 3;
	name = "default-scav";

	std::cout << "SC4V-TP <" << name << "> Created by default constructor!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 50;
	maxEnergyPoints = 50;
	level = 1;
	meleeAttackDamage = 20;
	rangedAttackDamage = 15;
	armorDamageReduction = 3;
	this->name = name;

	std::cout << "SC4V-TP <" << name << "> Created by name constructor!" << std::endl;	
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap)
{
	*this = scavTrap;

	std::cout << "SC4V-TP <" << name << "> Created by copy constructor!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP <" << name << "> Destroyed!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap)
{
	if (this != &scavTrap)
	{
		hitPoints = scavTrap.hitPoints;
		maxHitPoints = scavTrap.maxHitPoints;
		energyPoints = scavTrap.energyPoints;
		maxEnergyPoints = scavTrap.maxEnergyPoints;
		level = scavTrap.level;
		meleeAttackDamage = scavTrap.meleeAttackDamage;
		rangedAttackDamage = scavTrap.rangedAttackDamage;
		armorDamageReduction = scavTrap.armorDamageReduction;
		name = scavTrap.name;
	}
	std::cout << "SC4V-TP <" << name << "> Assigned!" << std::endl;
	return (*this);
}

void ScavTrap::rangedAttack(const std::string& target)
{
	std::cout << "SC4V-TP <" << name << "> attacks <" << target << "> at range, causing <"
		<< rangedAttackDamage << "> points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(const std::string& target)
{
	std::cout << "SC4V-TP <" << name << "> attacks <" << target << "> at melee, causing <"
		<< meleeAttackDamage << "> points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int damage = amount - armorDamageReduction;

	if (hitPoints < damage)
	{
		damage = hitPoints;
		hitPoints = 0;
		std::cout << "SC4V-TP " << "<<" << name << ">> take [" << damage << "] damage!!" << std::endl;		
		std::cout << "<<" << name << ">>'s HP is [0]..." << std::endl;
	}
	else
	{
		hitPoints -= damage;
		std::cout << "SC4V-TP " << "<<" << name << ">> take [" << damage << "] damage!!" << std::endl;
		std::cout << "<<" << name << ">>'s HP is [" << hitPoints << "] left" << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "SC4V-TP " << "<<" << name << ">>" << " be repaired[" << amount << "].";

	if (hitPoints + amount > maxHitPoints)
	{
		hitPoints = maxHitPoints;
		std::cout << "<<" << name << ">>'s HP is full ";
	}
	else
	{
		hitPoints += amount;
		std::cout << "<<" << name << ">>'s HP is [" << hitPoints << "] ";
	}

	if (energyPoints + amount > maxEnergyPoints)
	{
		energyPoints = maxEnergyPoints;
		std::cout << "<<" << name << ">>'s Energy is full" << std::endl;
	}
	else
	{
		energyPoints += amount;
		std::cout << "<<" << name << ">>'s Energy is [" << energyPoints << "]" << std::endl;
	}
}

void ScavTrap::challengeNewcomer(void)
{
	std::string challenges[] = {
		"Ice Bucket Challenge", "Food Fight", "Tour de Korea"
	};
	std::cout << "SC4V-TP <" << name << "> challenged " << challenges[rand() % 3] << std::endl;
}

const std::string& ScavTrap::getName(void)
{
	return (this->name);
}
