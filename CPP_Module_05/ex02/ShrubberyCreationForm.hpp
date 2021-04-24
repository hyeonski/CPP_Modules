#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(const std::string&);
	ShrubberyCreationForm(const ShrubberyCreationForm&);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm&);
	virtual ~ShrubberyCreationForm();

	void execute(Bureaucrat const & executor) const;

	class fileOpenFailed : public std::exception
	{
	public:
		 virtual const char* what() const throw();
	};

};

#endif
