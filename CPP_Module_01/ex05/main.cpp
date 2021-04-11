#include "Pony.hpp"
#include <iostream>

void ponyOnTheHeap()
{
	Pony* pony = new Pony;
	pony->setName("ponyOnHeap");
	pony->printName();
	std::cout << "Delete pony on the heap" << std::endl;
	delete pony;
}

void ponyOnTheStack()
{
	Pony pony;
	pony.setName("ponyOnStack");
	pony.printName();
	std::cout << "Delete pony on the stack" << std::endl;
}

int main()
{
	std::cout << "Pony on heap" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl;

	std::cout << "Pony on stack" << std::endl;
	ponyOnTheStack();
	return 0;
}