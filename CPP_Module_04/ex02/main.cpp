#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <iostream>

int main()
{
	std::cout << std::endl;
	std::cout << "--------create----------" << std::endl;
	std::cout << std::endl;

	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* hyopark = new TacticalMarine;
	ISpaceMarine* yepark = new AssaultTerminator;

	std::cout << std::endl;
	std::cout << "--------push----------" << std::endl;
	std::cout << std::endl;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(hyopark);
	vlc->push(yepark);

	std::cout << std::endl;
	std::cout << "--------use func----------" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << std::endl;
	std::cout << "--------delete----------" << std::endl;
	std::cout << std::endl;
	delete vlc;

	return 0;
}
