#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string &t): Form(72, 45, "Robotomy", t)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src): Form(src)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::action() const
{
    srand(time(NULL));
    std::cout << "DRILL DRILL DRILL\n";
    if ((int)(rand() % 2))
        std::cout << target << " has succesfully been robotomized" << std::endl;
    else
        std::cout << target << " could not be robotomized at the time.\nSUCH A SHAME" << std::endl;
}