#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>

class Victim
{
private:
	Victim();
protected:
	std::string _name;
public:
	Victim(std::string name);
	Victim(const Victim& victim);
	Victim& operator=(const Victim& victim);
	virtual ~Victim();
	
	const std::string& getName(void) const;
	void setName(const std::string& name);
	virtual void getPolymorphed(void) const;
};

std::ostream& operator<<(std::ostream& out, const Victim& victim);

#endif