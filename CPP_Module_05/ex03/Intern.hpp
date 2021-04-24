#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern
{
private:
	
public:
	Intern();
	Intern(const Intern&);
	Intern& operator=(const Intern&);
	virtual ~Intern();

	Form* makeForm(std::string name, std::string target);

	class InvalidTypeException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

#endif