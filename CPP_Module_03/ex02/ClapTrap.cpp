#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	meleeAttackDamage = 30;
	rangedAttackDamage = 20;
	armorDamageReduction = 5;
	name = "default-clap";

	std::cout << "CL4P-TP <" << name << "> Created by default constructor!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	meleeAttackDamage = 30;
	rangedAttackDamage = 20;
	armorDamageReduction = 5;
	this->name = name;

	std::cout << "CL4P-TP <" << name << "> Created by name constructor!" << std::endl;	
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap)
{
	*this = clapTrap;

	std::cout << "CL4P-TP <" << name << "> Created by copy constructor!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP <" << name << "> Destroyed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
	if (this != &clapTrap)
	{
		hitPoints = clapTrap.hitPoints;
		maxHitPoints = clapTrap.maxHitPoints;
		energyPoints = clapTrap.energyPoints;
		maxEnergyPoints = clapTrap.maxEnergyPoints;
		level = clapTrap.level;
		meleeAttackDamage = clapTrap.meleeAttackDamage;
		rangedAttackDamage = clapTrap.rangedAttackDamage;
		armorDamageReduction = clapTrap.armorDamageReduction;
		name = clapTrap.name;
	}
	std::cout << "CL4P-TP <" << name << "> Assigned!" << std::endl;
	return (*this);
}

void ClapTrap::rangedAttack(const std::string& target)
{
	std::cout << "CL4P-TP <" << name << "> attacks <" << target << "> at range, causing <"
		<< rangedAttackDamage << "> points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(const std::string& target)
{
	std::cout << "CL4P-TP <" << name << "> attacks <" << target << "> at melee, causing <"
		<< meleeAttackDamage << "> points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int damage = amount - armorDamageReduction;

	if (hitPoints < damage)
	{
		damage = hitPoints;
		hitPoints = 0;
		std::cout << "CL4P-TP " << "<<" << name << ">> take [" << damage << "] damage!!" << std::endl;		
		std::cout << "<<" << name << ">>'s HP is [0]..." << std::endl;
	}
	else
	{
		hitPoints -= damage;
		std::cout << "CL4P-TP " << "<<" << name << ">> take [" << damage << "] damage!!" << std::endl;
		std::cout << "<<" << name << ">>'s HP is [" << hitPoints << "] left" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "CL4P-TP " << "<<" << name << ">>" << " be repaired[" << amount << "].";

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

const std::string& ClapTrap::getName(void)
{
	return (this->name);
}
