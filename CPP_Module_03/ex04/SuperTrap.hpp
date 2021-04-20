#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(const std::string& name);
	SuperTrap(const SuperTrap& ninjaTrap);
	SuperTrap &operator=(const SuperTrap& ninjaTrap);
	~SuperTrap();
};	

#endif