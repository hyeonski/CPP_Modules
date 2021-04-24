#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("Robotomy Request Form", 72, 45, target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref) : Form(ref)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& ref)
{
	Form::operator=(ref);
	return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    Form::execute(executor);
	
	std::cout << "drrrrrrr.....drrrrrrr" << std::endl;
	if (rand() % 2)
        std::cout << getTarget() << " has been robotomized succesfully." << std::endl;
    else
        std::cout << getTarget() << " robotomization has failed." << std::endl;
}
