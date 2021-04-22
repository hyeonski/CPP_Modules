#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
	
}

Ice::Ice(const Ice &ice) : AMateria(ice)
{

}

Ice& Ice::operator=(const Ice &ice)
{
	AMateria::operator=(ice);
	return (*this);
}

Ice::~Ice()
{

}

AMateria *Ice::clone() const
{
	Ice *ice = new Ice(*this);

	return (ice);
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}