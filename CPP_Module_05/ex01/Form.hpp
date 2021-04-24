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
public:
	Form();
	Form(std::string name, int gradeToSign, int gradeToExec);
	Form(const Form&);
	Form& operator=(const Form&);
	~Form();

	const std::string& getName() const;
	bool isSigned() const;
	int getGradeToSign() const;
	int getGradeToExec() const;

	void beSigned(Bureaucrat& bureaucrat);


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
};

std::ostream &operator<<(std::ostream& out, const Form& form);

#endif