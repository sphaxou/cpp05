#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern &src)
{*this = src;}

Intern &Intern::operator=(const Intern &src)
{
    (void)src;
    return (*this);
}

Intern::~Intern()
{}

static Form *createPresidential(const std::string &target){return (new PresidentialPardonForm(target));}
static Form *createRobotomy(const std::string &target){return (new RobotomyRequestForm(target));}
static Form *createShrubbery(const std::string &target){return (new ShrubberyCreationForm(target));}

Form *Intern::makeForm(const std::string &name, const std::string &target)
{
    Form *res;

    res = NULL;
    formtype form[] = 
    {
        {"presidential pardon", &createPresidential},
        {"robotomy request", &createRobotomy},
        {"shrubbery creation", &createShrubbery}
    };

    for (int i = 0; i < 3; i++)
        if (form[i].name == name)
        {
            res = form[i].f(target);
            std::cout << "Intern creates " << res->getName() << std::endl;
            return (res);
        }
        std::cerr << "Intern doesn't know the requested Form type" << std::endl;
        return (res);
}