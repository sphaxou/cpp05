#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm: public Form
{	
	private:
		PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &src);

		virtual ~PresidentialPardonForm();

		virtual void action() const;
};

#endif