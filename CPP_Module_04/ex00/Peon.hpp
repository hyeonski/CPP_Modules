#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon();
public:
	Peon(std::string name);
	Peon(const Peon& peon);
	Peon& operator=(const Peon& peon);
	~Peon();
};

std::ostream& operator<<(std::ostream &out, Peon &peon);

#endif