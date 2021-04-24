#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form("Presidential Pardon Form", 25, 5, target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref) : Form(ref)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
	Form::operator=(ref);
	return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    Form::execute(executor);

	std::cout << "<" << getTarget() << "> has been pardoned by Zafod Beeblebrox." << std::endl;
}
