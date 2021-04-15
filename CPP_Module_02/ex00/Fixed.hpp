#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int value;
	static const int frac = 8;
public:
	Fixed();
	Fixed(const Fixed& origin);
	~Fixed();
	Fixed& operator=(const Fixed& fixed);

	int getRawBits(void) const;
	void setRawBits(const int raw);
};

#endif