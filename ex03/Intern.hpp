#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"

typedef Form *(*f)(const std::string &target);
typedef struct
{
    std::string name;
    f f;
}   formtype;

class Intern
{
    private:

    public:
        Intern();
        Intern(const Intern&);
        Intern &operator=(const Intern &src);
        ~Intern();

        Form *makeForm(const std::string &name, const std::string &target);

};

#endif