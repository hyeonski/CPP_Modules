#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	this->name = "default-FR4G";
	std::cout << "FR4G-TP <" << name << "> Created by default constructor!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FR4G-TP <" << name << "> Created by name constructor!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragTrap) : ClapTrap(fragTrap)
{
	std::cout << "FR4G-TP <" << name << "> Created by copy constructor!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP <" << name << "> Destroyed!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap)
{
	ClapTrap::operator=(fragTrap);
	std::cout << this->hitPoints;
	std::cout << "FR4G-TP <" << name << "> Assigned!" << std::endl;
	return (*this);
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
