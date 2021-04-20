#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
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