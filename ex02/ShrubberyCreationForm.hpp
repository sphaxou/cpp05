#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{	
	private:
		ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
	public:
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);

		virtual ~ShrubberyCreationForm();

		virtual void action() const;
};

#endif
