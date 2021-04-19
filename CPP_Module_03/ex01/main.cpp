#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	std::srand(time(NULL));

	FragTrap trap1;
	FragTrap trap2("YEPARK");
	
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

	ScavTrap trap3;
	ScavTrap trap4("HYOPARK");
	
	std::cout << std::endl;
	std::cout << "=====================================================" << std::endl;
	std::cout << std::endl;
	trap3.rangedAttack(trap4.getName());
	trap3.meleeAttack(trap4.getName());

	trap3.takeDamage(20);
	trap3.beRepaired(10);
	trap3.beRepaired(30);
	
	trap3.takeDamage(1000);
	
	trap3.challengeNewcomer();
	trap3.challengeNewcomer();
	trap3.challengeNewcomer();
	trap3.challengeNewcomer();

	std::cout << std::endl;
	std::cout << "=====================================================" << std::endl;
	std::cout << std::endl;
}
