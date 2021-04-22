#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	std::string _name;
	int _AP;
	AWeapon *_weapon;
	
	Character();
public:
	Character(const std::string &name);
	Character(const Character &character);
	Character &operator=(const Character &character);
	virtual ~Character();

	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);

	const std::string &getName() const;
	int getAP() const;
	AWeapon *getWeapon() const;
};

std::ostream &operator<<(std::ostream &out, Character &character);

#endif
