#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>

class AWeapon
{
private:
	AWeapon();
protected:
	std::string _name;
	int _APCost;
	int _damage;
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon& aweapon);
	virtual ~AWeapon();
	std::string virtual getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif