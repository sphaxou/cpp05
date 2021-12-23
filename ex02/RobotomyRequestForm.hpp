#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
    private:
		RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &src);

		virtual ~RobotomyRequestForm();

		virtual void action() const;
};
#endif