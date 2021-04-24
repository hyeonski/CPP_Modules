#include "Form.hpp"

int checkFormGrade(int grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	if (grade > 150)
		throw Form::GradeTooLowException();
	return (grade);
}


Form::Form() : _name("default"), _gradeToSign(1), _gradeToExec(1)
{
	_isSigned = false;
	_target = "";
}

Form::Form(std::string name, int gradeToSign, int gradeToExec, std::string target) 
	: _name(name), _gradeToSign(checkFormGrade(gradeToSign)),
	_gradeToExec(checkFormGrade(gradeToExec))
{
	_isSigned = false;
	_target = target;
}

Form::Form(const Form& other) 
	: _name(other.getName()), _gradeToSign(checkFormGrade(other.getGradeToSign())),
	_gradeToExec(checkFormGrade(other.getGradeToExec()))
{
	_isSigned = other.isSigned();
	_target = other.getTarget();
}

Form &Form::operator=(const Form& other)
{
	if (this != &other)
	{
		_isSigned = other.isSigned();
		_target = other.getTarget();
	}
	return (*this);
}

Form::~Form()
{

}

std::string const &Form::getName() const
{
	return (_name);
}

bool Form::isSigned() const
{
	return (_isSigned);
}

int Form::getGradeToSign() const
{
	return (_gradeToSign);
}

int Form::getGradeToExec() const
{
	return (_gradeToExec);
}

const std::string& Form::getTarget() const
{
	return (_target);
}

void Form::beSigned(Bureaucrat& bureaucrat)
{
    if (_gradeToSign >= bureaucrat.getGrade())
        _isSigned = true;
    else
        throw Bureaucrat::GradeTooLowException();
}

void Form::execute(Bureaucrat const & executor) const
{
	if (!_isSigned)
		throw Form::NotSignedException();
	if (executor.getGrade() > _gradeToExec)
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Error: Form: Grade Too High!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Error: Form: Grade Too Low!");
}

const char *Form::NotSignedException::what() const throw()
{
	return ("Error: Form: Not Signed!");
}

std::ostream& operator<<(std::ostream& out, const Form& form)
{
	return (out << form.getName() << ", " << form.isSigned() << ", " 
		<< form.getGradeToSign() << ", " << form.getGradeToExec() << std::endl); 
}