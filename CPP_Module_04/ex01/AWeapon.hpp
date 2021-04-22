#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>

class AWeapon
{
private:
	std::string _name;
	int _APCost;
	int _damage;

	AWeapon();
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon& aweapon);
	virtual ~AWeapon();
	AWeapon &operator=(const AWeapon &weapon);

	std::string const &getName() const;
	int getAPCost() const;
	int getDamage() const;

	void setName(const std::string &name);
	void setAPCost(const int APCost);
	void setDamage(const int damage);
	
	virtual void attack() const = 0;
};

#endif