#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>

class Enemy
{
private:
	int _hp;
	std::string _type;

	Enemy();
public:
	Enemy(int hp, const std::string &type);
	Enemy(const Enemy &enemy);
	Enemy &operator=(const Enemy &enemy);
	virtual ~Enemy();

	const std::string &getType() const;
	int getHP() const;

	virtual void takeDamage(int damage);
};

#endif