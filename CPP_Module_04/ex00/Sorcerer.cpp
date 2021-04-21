#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer(std::string name, std::string title)
{
	_name = name;
	_title = title;

	std::cout << _name << ", " << _title << ", born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& sorcerer)
{
	*this = sorcerer;
	std::cout << _name << ", " << _title << ", born!" << std::endl;
}

Sorcerer& Sorcerer::operator=(const Sorcerer& sorcerer)
{
	if (this != &sorcerer)
	{
		_name = sorcerer.getName();
		_title = sorcerer.getTitle();
	}
	return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead, Consequences will never be the same!" << std::endl;
}

const std::string& Sorcerer::getName(void) const
{
	return (_name);
}

const std::string& Sorcerer::getTitle(void) const
{
	return (_title);
}

void Sorcerer::setName(const std::string& name)
{
	_name = name;
}

void Sorcerer::setTitle(const std::string& title)
{
	_title = title;
}

void Sorcerer::polymorph(const Victim& victim)
{
	victim.getPolymorphed();
}


std::ostream& operator<<(std::ostream& out, const Sorcerer& sorcerer)
{
	out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return (out);
}