#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(const SuperMutant &superMutant);
	SuperMutant &operator=(const SuperMutant &superMutant);
	virtual ~SuperMutant();

	void takeDamage(int damage);
};

#endif