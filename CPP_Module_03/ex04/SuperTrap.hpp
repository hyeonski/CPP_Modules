#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, NinjaTrap
{
public:
	NinjaTrap();
	NinjaTrap(const std::string& name);
	NinjaTrap(NinjaTrap const &ninjaTrap);
	NinjaTrap &operator=(NinjaTrap const &ninjaTrap);
	~NinjaTrap();

	void ninjaShoebox(const ClapTrap& clapTrap);
	void ninjaShoebox(const FragTrap& fragTrap);
	void ninjaShoebox(const ScavTrap& scavTrap);
	void ninjaShoebox(const NinjaTrap& ninjaTrap);
};

#endif