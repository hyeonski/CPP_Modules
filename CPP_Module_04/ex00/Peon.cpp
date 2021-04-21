#include "Peon.hpp"
#include <iostream>

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &peon) : Victim(peon)
{
	std::cout << "Zog zog." << std::endl;
}

Peon& Peon::operator=(const Peon &peon)
{
	Victim::operator=(peon);
	return (*this);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

std::ostream& operator<<(std::ostream &out, Peon &peon)
{
	return (out << "I'm " << peon.getName() << " and I like otters!" << std::endl);
}