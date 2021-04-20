#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	std::srand(time(0));

	FragTrap trap1;
	FragTrap trap2("juyang");
	
	std::cout << std::endl;
	std::cout << "=====================================================" << std::endl;
	std::cout << std::endl;
	
	trap1.rangedAttack(trap2.getName());
	trap1.meleeAttack(trap2.getName());

	trap2.takeDamage(20);
	trap2.beRepaired(10);
	trap2.beRepaired(30);
	
	trap2.takeDamage(1000);
	
	trap1.vaulthunter_dot_exe(trap2.getName());
	trap1.vaulthunter_dot_exe(trap2.getName());
	trap1.vaulthunter_dot_exe(trap2.getName());
	trap1.vaulthunter_dot_exe(trap2.getName());
	trap1.vaulthunter_dot_exe(trap2.getName());
	trap1.beRepaired(30);
	trap1.vaulthunter_dot_exe(trap2.getName());
	std::cout << std::endl;
	std::cout << "=====================================================" << std::endl;
	std::cout << std::endl;

	ScavTrap cadet3;
	ScavTrap cadet4("wopark");
	
	std::cout << std::endl;
	std::cout << "=====================================================" << std::endl;
	std::cout << std::endl;
	cadet3.rangedAttack(cadet4.getName());
	cadet3.meleeAttack(cadet4.getName());

	cadet3.takeDamage(20);
	cadet3.beRepaired(10);
	cadet3.beRepaired(30);
	
	cadet3.takeDamage(1000);
	
	cadet3.challengeNewcomer();
	cadet3.challengeNewcomer();
	cadet3.challengeNewcomer();
	cadet3.challengeNewcomer();

	std::cout << std::endl;
	std::cout << "=====================================================" << std::endl;
	std::cout << std::endl;
}