#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
private:
	unsigned int hitPoints;
	unsigned int maxHitPoints;
	unsigned int energyPoints;
	unsigned int maxEnergyPoints;
	unsigned int level;
	unsigned int meleeAttackDamage;
	unsigned int rangedAttackDamage;
	unsigned int armorDamageReduction;
	std::string name;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& clapTrap);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& clapTrap);

	void rangedAttack(const std::string& target);
	void meleeAttack(const std::string& target);;
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	const std::string& getName(void);
};

#endif