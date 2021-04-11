#include "Pony.hpp"
#include <iostream>

void Pony::setName(std::string name)
{
	this->name = name;
}
void Pony::printName(void)
{
	std::cout << "The name is " << name << std::endl;
}