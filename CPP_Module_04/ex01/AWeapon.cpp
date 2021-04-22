#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	this->_name = name;
	this->_APCost = apcost;
	this->_damage = damage;
}

AWeapon::AWeapon(const AWeapon &weapon)
{
	_name = weapon.getName();
	_damage = weapon.getDamage();
	_APCost = weapon.getAPCost();
}

AWeapon::~AWeapon()
{

}

AWeapon &AWeapon::operator=(const AWeapon &weapon)
{
	if (this != &weapon)
	{
		_name = weapon.getName();
		_damage = weapon.getDamage();
		_APCost = weapon.getAPCost();
	}
	return *this;
}

std::string const &AWeapon::getName() const
{
	return (_name);
}

int AWeapon::getAPCost() const
{
	return (_APCost);
}

int AWeapon::getDamage() const
{
	return (_damage);
}

void AWeapon::setName(const std::string &name)
{
	this->_name = name;
}

void AWeapon::setAPCost(const int APCost)
{
	this->_APCost = APCost;
}

void AWeapon::setDamage(const int damage)
{
	this->_damage = damage;
}
