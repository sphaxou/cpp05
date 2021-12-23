#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern intern;
	Form *rff;
	Bureaucrat zafod("zafod", 1);
	rff = intern.makeForm("presidential pardon", "Bob");
	zafod.signForm(*rff);
	zafod.executeForm(*rff);
	delete rff;
	rff = intern.makeForm("robotomy request", "Bob");
	zafod.signForm(*rff);
	zafod.executeForm(*rff);
	delete rff;
	rff = intern.makeForm("shrubbery creation", "Bob");
	zafod.signForm(*rff);
	zafod.executeForm(*rff);
	delete rff;
	rff = intern.makeForm("presidial pardon", "Bob");
	delete rff;


	return (0);
}