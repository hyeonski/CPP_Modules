#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <string>

class Human
{
private:
	const Brain brain;
public:
	std::string identify(void);
	const Brain& getBrain(void);
};

#endif