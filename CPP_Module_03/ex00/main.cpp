#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
	std::srand(time(NULL));

	FragTrap trap1;
	FragTrap trap2("TR4P");
	
	std::cout << std::endl;
	std::cout << "=====================================================" << std::endl;
	std::cout << std::endl;
	trap1.rangedAttack(trap2.getName());
	trap2.takeDamage(20);
	trap1.meleeAttack(trap2.getName());
	trap2.takeDamage(30);
	
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
}
