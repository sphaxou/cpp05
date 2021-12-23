#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(int sign, int exec, const std::string &n):name(n), grade_to_sign(sign), grade_to_exec(exec)
{
	if (sign > 150 || exec > 150)
		throw GradeTooLowException();
	if (sign < 1 || exec < 1)
		throw GradeTooHighException();
	is_signed = false;
}

Form::Form(int sign, int exec, const std::string &n, const std::string &t):name(n), grade_to_sign(sign), grade_to_exec(exec), target(t)
{
	if (sign > 150 || exec > 150)
		throw GradeTooLowException();
	if (sign < 1 || exec < 1)
		throw GradeTooHighException();
	is_signed = false;
}

Form::Form(const Form &src): name(src.name), grade_to_sign(src.grade_to_sign), grade_to_exec(src.grade_to_exec), target(src.target)
{is_signed = src.is_signed;}

Form::~Form()
{}

int	Form::getGrade_to_sign()const
{return (grade_to_sign);}

int	Form::getGrade_to_exec()const
{return (grade_to_exec);}

std::string Form::getName()const
{return (name);}

bool Form::getsign()const
{return (is_signed);}

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->grade_to_sign)
		throw GradeTooLowException();
	is_signed = true;
}

void Form::checkexec(const Bureaucrat &executor) const
{
	if (!is_signed)
		throw IsNotSigned();
	if (executor.getGrade() > grade_to_exec)
		throw GradeTooLowException();
	if (target == "")
		throw NoTarget();
}

void Form::execute(const Bureaucrat &executor)const
{
	try
	{
		checkexec(executor);
		action();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

std::ostream	&operator<<(std::ostream & out, const Form & form)
{
	out << form.getName() << ", grade to be signed " << form.getGrade_to_sign()
		<< ", grade to be executed " << form.getGrade_to_exec() << ", is signed " << form.getsign();
	return (out);
}