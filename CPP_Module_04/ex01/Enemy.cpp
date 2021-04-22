#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
{
	this->_hp = hp;
	this->_type = type;
}

Enemy::Enemy(const Enemy &enemy)
{
	*this = enemy;
}

Enemy::~Enemy() {}

Enemy &Enemy::operator=(const Enemy &enemy)
{
	if (this != &enemy)
	{
		this->_hp = enemy.getHP();
		this->_type = enemy.getType();
	}
	return (*this);
}

std::string const &Enemy::getType() const
{
	return (_type);
}

int Enemy::getHP() const
{
	return (_hp);
}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	if (damage > 0)
	{
		if ((_hp -= damage) < 0)
			_hp = 0;
	}
}
