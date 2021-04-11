#ifndef PONY_HPP
# define PONY_HPP

#include <string>

class Pony
{
private:
	std::string name;
public:
	void setName(std::string name);
	void printName();
};

#endif