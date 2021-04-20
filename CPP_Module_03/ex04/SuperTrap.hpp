#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(const std::string& name);
	SuperTrap(const SuperTrap& superTrap);
	SuperTrap &operator=(const SuperTrap& superTrap);
	~SuperTrap();

	void rangedAttack(const std::string& target);
	void meleeAttack(const std::string& target);
};	

#endif