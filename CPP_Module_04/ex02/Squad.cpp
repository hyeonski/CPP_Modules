#include "Squad.hpp"
#include <cstddef>

Squad::Squad()
{
	this->_count = 0;
	this->_units = NULL;
}

Squad::Squad(Squad const &squad)
{
	_count = 0;
	_units = NULL;
    *this = squad;
}

Squad   &Squad::operator=(Squad const &squad)
{
    if (this != &squad)
	{
		if (this->_units)
		{
			for (int i = 0; i < this->_count; i++)
				delete this->_units[i];
			delete [] this->_units;
			this->_units = NULL;
			this->_count = 0;
		}
		for (int i = 0; i < squad._count; i++)
			this->push(squad.getUnit(i)->clone());
    }
    return (*this);
}

Squad::~Squad()
{
	if (_units)
	{
		for (int i = 0; i < _count; i++)
			delete _units[i];
		delete [] _units;
	}
}

int Squad::getCount() const
{ 
	return (_count); 
}

ISpaceMarine *Squad::getUnit(int index) const
{
    if (index < 0 || index > _count)
        return (NULL);
    return (_units[index]);
}

int Squad::push(ISpaceMarine *marine)
{
    if (!marine)
        return (_count);
	if (_count == 0)
	{
		_units = new ISpaceMarine*[1];
		_units[0] = marine;
		_count = 1;
	}
	else
	{
		for (int i = 0; i < _count; i++)
			if (_units[i] == marine)
				return (_count);
		
		ISpaceMarine **newUnits = new ISpaceMarine*[_count + 1];
		for (int i = 0; i < _count; i++)
			newUnits[i] = _units[i];
		newUnits[_count] = marine;
		delete[] _units;
		_units = newUnits;
		_count++;
	}
	
	return (_count);
}