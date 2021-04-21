#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>

class Enemy
{
private:
	Enemy();
	
protected:

public:
	Enemy(int hp, const std::string &type);
	Enemy();
	virtual ~Enemy();

	std::string [] getType() const;
	int getHP
};

#endif