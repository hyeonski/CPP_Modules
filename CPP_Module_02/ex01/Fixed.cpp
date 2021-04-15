#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (n << frac);
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(n * (1 << frac));
}

Fixed::Fixed(const Fixed& origin)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = origin;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(const int raw)
{
	this->value = raw;
}

int Fixed::toInt(void) const
{
	return value >> frac;
}

float Fixed::toFloat(void) const
{
	return (float)(value / (1 << frac));
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	return (out << fixed.toFloat());
}