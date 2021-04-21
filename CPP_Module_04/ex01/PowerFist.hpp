#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(const PowerFist &powerFist);
	PowerFist &operator=(const PowerFist &powerFist);
	virtual ~PowerFist();

	void attack() const;
};

#endif