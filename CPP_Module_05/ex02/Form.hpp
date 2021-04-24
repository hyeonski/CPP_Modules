#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
class Form
{
private:
	const std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExec;
	std::string _target;
public:
	Form();
	Form(std::string name, int gradeToSign, int gradeToExec, std::string target);
	Form(const Form&);
	Form& operator=(const Form&);
	virtual ~Form();

	const std::string& getName() const;
	bool isSigned() const;
	int getGradeToSign() const;
	int getGradeToExec() const;
	const std::string& getTarget() const;

	void beSigned(Bureaucrat& bureaucrat);
	virtual void execute(Bureaucrat const & executor) const;

	class GradeTooHighException : public std::exception
	{
	public:
		 virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		 virtual const char* what() const throw();
	};

	class NotSignedException : public std::exception
	{
	public:
		 virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream& out, const Form& form);

#endif