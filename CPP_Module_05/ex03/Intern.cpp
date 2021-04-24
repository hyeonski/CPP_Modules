#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern& ref)
{
	(void)ref;
}

Intern::~Intern()
{

}

Intern& Intern::operator=(const Intern& ref)
{
	(void)ref;
	return (*this);
}

Form *createShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *createRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *createPresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form* Intern::makeForm(std::string name, std::string target)
{
	std::string form_name[3] = 
    {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
	Form* (*form_create[3])(std::string) = 
	{
		createShrubberyCreationForm,
		createRobotomyRequestForm,
		createPresidentialPardonForm
	};

	for (int i = 0; i < 3; i++)
	{
		if (form_name[i] == name)
		{
			std::cout << "Intern creates " << "<" << name << ">" << std::endl;
			return (form_create[i](target));
		}
	}
	throw Intern::InvalidTypeException();
	return (NULL);
}

const char* Intern::InvalidTypeException::what() const throw()
{
    return ("InternException: Form Not Found");
}