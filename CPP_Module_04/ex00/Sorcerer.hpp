#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include "Victim.hpp"

class Sorcerer
{
private:
	std::string _name;
	std::string _title;
	Sorcerer();
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer& sorcerer);
	Sorcerer& operator=(const Sorcerer& sorcerer);
	~Sorcerer();

	const std::string& getName(void) const;
	const std::string& getTitle(void) const;
	void setName(const std::string& name);
	void setTitle(const std::string& title);
	void polymorph(const Victim& victim);
};

std::ostream& operator<<(std::ostream& out, const Sorcerer& sorcerer);

#endif
