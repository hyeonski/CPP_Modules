#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(const RadScorpion &radScorpion);
	RadScorpion &operator=(const RadScorpion &radScorpion);
	virtual ~RadScorpion();

	void takeDamage(int damage);
};

#endif