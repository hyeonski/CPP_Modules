#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();
public:
	RobotomyRequestForm(const std::string&);
	RobotomyRequestForm(const RobotomyRequestForm&);
	RobotomyRequestForm &operator=(const RobotomyRequestForm&);
	virtual ~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;
};

#endif
