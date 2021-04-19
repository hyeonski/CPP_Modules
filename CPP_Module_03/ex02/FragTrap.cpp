#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FR4G-TP <" << getName() << "> Created by default constructor!" << std::endl;
}

FragTrap::FragTrap(std::string name)
{

	std::cout << "FR4G-TP <" << getName() << "> Created by name constructor!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragTrap)
{
	*this = fragTrap;

	std::cout << "FR4G-TP <" << getName() << "> Created by copy constructor!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP <" << getName() << "> Destroyed!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap)
{
	ClapTrap::operator=(fragTrap);
	std::cout << "FR4G-TP <" << getName() << "> Assigned!" << std::endl;
	return (*this);
}

void FragTrap::vaulthunter_dot_exe(const std::string& target)
{
	std::string attacks[] = {
		"Fire", "Ice", "Light", "Dark", "Poison"
	};

	unsigned int damage[] = {1, 2, 4, 8, 16};
	int random = rand() % 5;
	int energy = getEnergyPoint();
	if (energy >= 25)
	{
		setEnergyPoint(energy - 25);
		std::cout << "FR4G-TP <" << getName() << "> attacks <" << target 
		<< "> with " << attacks[random] << ", causing <"
		<< damage[random] << "> points of damage!" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP <" << getName() << "> can't use vaulthunter_dot_exe - Not enough energy" << std::endl;
}

