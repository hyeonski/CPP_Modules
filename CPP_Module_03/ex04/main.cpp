#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>

int main(void)
{
	std::srand(time(NULL));

	FragTrap trap1;
	FragTrap trap2("yepark");
	
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
	ScavTrap trap4("hyopark");
	
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

	NinjaTrap trap5;
	NinjaTrap trap6("hekang");
	
	std::cout << std::endl;
	std::cout << "=====================================================" << std::endl;
	std::cout << std::endl;
	trap5.rangedAttack(trap4.getName());
	trap5.meleeAttack(trap4.getName());

	trap5.takeDamage(20);
	trap5.beRepaired(10);
	trap5.beRepaired(30);
	
	trap5.takeDamage(1000);
	trap6.ninjaShoebox(trap1);
	trap5.ninjaShoebox(trap3);
	trap6.ninjaShoebox(trap5);

	
	std::cout << std::endl;
	std::cout << "=====================================================" << std::endl;
	std::cout << std::endl;

	SuperTrap trap7;
	SuperTrap trap8("sushin");
	
	std::cout << std::endl;
	std::cout << "=====================================================" << std::endl;
	std::cout << std::endl;
	trap7.rangedAttack(trap8.getName());
	trap7.meleeAttack(trap8.getName());

	trap7.takeDamage(20);
	trap7.beRepaired(10);
	trap7.beRepaired(30);
	
	trap7.takeDamage(1000);
	trap7.vaulthunter_dot_exe(trap4.getName());
	trap7.ninjaShoebox(trap4);
	
	std::cout << std::endl;
	std::cout << "=====================================================" << std::endl;
	std::cout << std::endl;
}