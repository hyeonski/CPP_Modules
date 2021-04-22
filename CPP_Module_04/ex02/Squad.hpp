#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad
{
private:
	int _count;
	ISpaceMarine **_units;
public:
	Squad();
	Squad(const Squad &ref);
	Squad &operator=(const Squad &ref);
	virtual ~Squad();

	int getCount() const;
	ISpaceMarine* getUnit(int index) const;
	int push(ISpaceMarine *marine);
};

#endif