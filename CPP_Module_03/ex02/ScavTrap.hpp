#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>

class ScavTrap
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
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& scavTrap);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& scavTrap);

	void rangedAttack(const std::string& target);
	void meleeAttack(const std::string& target);;
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(void);
	const std::string& getName(void);
};

#endif