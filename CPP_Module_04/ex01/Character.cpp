#include "Character.hpp"
#include <iostream>

Character::Character(std::string const &name)
{
	this->_name = name;
	this->_AP = 40;
	this->_weapon = NULL;
}

Character::Character(const Character& character)
{
	*this = character;
}

Character::~Character() {}

Character &Character::operator=(const Character &character)
{
	if (this != &character)
	{
		this->_name = character.getName();
		this->_AP = character.getAP();
		this->_weapon = character.getWeapon();
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (_name);
}

int Character::getAP() const
{
	return (_AP);
}

AWeapon *Character::getWeapon() const
{
	return (_weapon);
}

void Character::recoverAP()
{
	if ((_AP += 10) > 40)
		_AP = 40;
}

void Character::equip(AWeapon* weapon)
{
	this->_weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
	if (_weapon && enemy)
	{
		if (_AP < _weapon->getAPCost())
			return ;
		std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		enemy->takeDamage(_weapon->getDamage());
		_AP -= _weapon->getAPCost();
		if (enemy->getHP() == 0)
			delete enemy;
	}
}

std::ostream& operator<<(std::ostream &out, Character &character)
{
	if (character.getWeapon())
	{
		return (out << character.getName() << " has " << character.getAP() 
			<< " AP and wields a " << character.getWeapon()->getName() << std::endl);
	}
	else
		return (out << character.getName() << " has " << character.getAP() 
			<< " AP and is unarmed" << std::endl);
}
