#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();
public:
	PresidentialPardonForm(const std::string&);
	PresidentialPardonForm(const PresidentialPardonForm&);
	PresidentialPardonForm &operator=(const PresidentialPardonForm&);
	virtual ~PresidentialPardonForm();

	void execute(Bureaucrat const & executor) const;
};

#endif
