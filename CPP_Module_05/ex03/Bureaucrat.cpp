#include "Bureaucrat.hpp"
#include "Form.hpp"

void checkBureaucratGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat() : _name("default"), _grade(1)
{

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	checkBureaucratGrade(grade);
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref) : _name(ref.getName())
{
	checkBureaucratGrade(ref.getGrade());
	this->_grade = ref.getGrade();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ref)
{
	if (this != &ref)
	{
		checkBureaucratGrade(ref.getGrade());
		_grade = ref.getGrade();
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{

}

const std::string& Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::incGrade()
{
	checkBureaucratGrade(_grade - 1);
	_grade--;
}

void Bureaucrat::decGrade()
{
	checkBureaucratGrade(_grade + 1);
	_grade++;
}

void Bureaucrat::signForm(Form& form)
{
    try
    {
        form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << "." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << _name << " cannot sign " << form.getName() << " because ";
        std::cout << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << "<" << _name << "> executes <" << form.getName() << ">" << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Bureaucrat: Grade Too High!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: Bureaucrat: Grade Too Low!");
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
	return (out << "<" << bureaucrat.getName() << ">, bureaucrat grade <" << bureaucrat.getGrade() << ">" << std::endl);
}
