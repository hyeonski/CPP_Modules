#ifndef HYEONSKI_HPP
# define HYEONSKI_HPP

# include "Victim.hpp"

class Hyeonski : public Victim
{
private:
	Hyeonski();
public:
	Hyeonski(std::string name);
	Hyeonski(const Hyeonski& hyeonski);
	Hyeonski& operator=(const Hyeonski& hyeonski);
	~Hyeonski();

	void getPolymorphed(void) const;
};

std::ostream& operator<<(std::ostream &out, Hyeonski &hyeonski);

#endif