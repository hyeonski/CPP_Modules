#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int value;
	static const int frac = 8;
public:
	Fixed();
	Fixed(const int n);
	Fixed(const float n);
	Fixed(const Fixed& origin);
	~Fixed();

	Fixed& operator=(const Fixed& fixed);

	float toFloat(void) const;
	int toInt(void) const;

	int getRawBits(void) const;
	void setRawBits(const int raw);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif