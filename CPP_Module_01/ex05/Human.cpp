#include "Human.hpp"
#include <iostream>

std::string Human::identify(void)
{
	return (getBrain().identify());
}

const Brain& Human::getBrain(void)
{
	return (this->brain);
}