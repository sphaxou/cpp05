#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	ShrubberyCreationForm shrub("test");
	PresidentialPardonForm pres("Prout");
	RobotomyRequestForm robot("JP");
	Bureaucrat bob("Bob", 50);
	Bureaucrat Zafod("Zafod Beeblebrox", 1);
	shrub.execute(bob);
	bob.signForm(shrub);
	shrub.execute(bob);
	bob.executeForm(pres);
	Zafod.signForm(pres);
	bob.executeForm(pres);
	Zafod.executeForm(pres);
	bob.executeForm(robot);
	Zafod.executeForm(robot);
	Zafod.signForm(robot);
	bob.executeForm(robot);
	Zafod.executeForm(robot);

	return (0);
}