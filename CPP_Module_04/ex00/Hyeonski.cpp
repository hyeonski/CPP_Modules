#include "Hyeonski.hpp"
#include <iostream>

Hyeonski::Hyeonski(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Hyeonski::Hyeonski(const Hyeonski &hyeonski) : Victim(hyeonski)
{
	std::cout << "Zog zog." << std::endl;
}

Hyeonski& Hyeonski::operator=(const Hyeonski &hyeonski)
{
	Victim::operator=(hyeonski);
	return (*this);
}

Hyeonski::~Hyeonski()
{
	std::cout << "ARRRRR..." << std::endl;
}

void Hyeonski::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cadet!" << std::endl;
}

std::ostream& operator<<(std::ostream &out, Hyeonski &hyeonski)
{
	return (out << "I'm " << hyeonski.getName() << " and I like otters!" << std::endl);
}