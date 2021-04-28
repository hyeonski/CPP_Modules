#include <iostream>
#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Hyeonski.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");
	Hyeonski hyeonski("hyeonski");
	Victim* victims[2];
	victims[0] = new Peon("test1");
	victims[1] = new Hyeonski("test2");


	std::cout << robert << jim << joe << hyeonski;
	
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(hyeonski);

	std::cout << std::endl;
	
	for (int i = 0; i < 2; i++)
		victims[i]->getPolymorphed();
	
	return 0;
}