#include "Victim.hpp"
#include <iostream>

Victim::Victim(std::string name)
{
	_name = name;

	std::cout << "some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim& victim)
{
	*this = victim;

	std::cout << "some random victim called " << _name << " just appeared!" << std::endl;
}

Victim& Victim::operator=(const Victim& victim)
{
	if (this != &victim)
		_name = victim.getName();
	return (*this);
}

Victim::~Victim()
{
	std::cout << "Victim " <<_name << " just died for no apparent reason!" << std::endl;
}

const std::string& Victim::getName(void) const
{
	return (_name);
}

void Victim::setName(const std::string& name)
{
	_name = name;
}

void Victim::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Victim& victim)
{
	out << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return (out);
}