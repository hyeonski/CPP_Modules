#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	meleeAttackDamage = 30;
	rangedAttackDamage = 20;
	armorDamageReduction = 5;
	name = "default";

	std::cout << "FR4G-TP <" << name << "> Created by default constructor!" << std::endl;
}

FragTrap::FragTrap(std::string name)
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

	std::cout << "FR4G-TP <" << name << "> Created by name constructor!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragTrap)
{
	*this = fragTrap;

	std::cout << "FR4G-TP <" << name << "> Created by copy constructor!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP <" << name << "> Destroyed!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap)
{
	if (this != &fragTrap)
	{
		hitPoints = fragTrap.hitPoints;
		maxHitPoints = fragTrap.maxHitPoints;
		energyPoints = fragTrap.energyPoints;
		maxEnergyPoints = fragTrap.maxEnergyPoints;
		level = fragTrap.level;
		meleeAttackDamage = fragTrap.meleeAttackDamage;
		rangedAttackDamage = fragTrap.rangedAttackDamage;
		armorDamageReduction = fragTrap.armorDamageReduction;
		name = fragTrap.name;
	}
	std::cout << "FR4G-TP <" << name << "> Assigned!" << std::endl;
	return (*this);
}

void FragTrap::rangedAttack(const std::string& target)
{
	std::cout << "FR4G-TP <" << name << "> attacks <" << target << "> at range, causing <"
		<< rangedAttackDamage << "> points of damage!" << std::endl;
}

void FragTrap::meleeAttack(const std::string& target)
{
	std::cout << "FR4G-TP <" << name << "> attacks <" << target << "> at melee, causing <"
		<< meleeAttackDamage << "> points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	unsigned int damage = amount - armorDamageReduction;

	if (hitPoints < damage)
	{
		damage = hitPoints;
		hitPoints = 0;
		std::cout << "FR4G-TP " << "<<" << name << ">> take [" << damage << "] damage!!" << std::endl;		
		std::cout << "<<" << name << ">>'s HP is [0]..." << std::endl;
	}
	else
	{
		hitPoints -= damage;
		std::cout << "FR4G-TP " << "<<" << name << ">> take [" << damage << "] damage!!" << std::endl;
		std::cout << "<<" << name << ">>'s HP is [" << hitPoints << "] left" << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " << "<<" << name << ">>" << " be repaired[" << amount << "].";

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

void FragTrap::vaulthunter_dot_exe(const std::string& target)
{
	std::string attacks[] = {
		"Fire", "Ice", "Light", "Dark", "Poison"
	};

	unsigned int damage[] = {1, 2, 4, 8, 16};
	int random = rand() % 5;
	if (energyPoints >= 25)
	{
		energyPoints -= 25;
		std::cout << "FR4G-TP <" << name << "> attacks <" << target 
		<< "> with " << attacks[random] << ", causing <"
		<< damage[random] << "> points of damage!" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP <" << name << "> can't use vaulthunter_dot_exe - Not enough energy" << std::endl;
}

const std::string& FragTrap::getName(void)
{
	return (this->name);
}
