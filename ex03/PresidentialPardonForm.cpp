#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(const std::string &t): Form(25, 5, "Presidential Pardon", t)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src): Form(src)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::action() const
{
    std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}