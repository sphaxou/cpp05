#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		bool is_signed;
		const std::string 	name;
		const int grade_to_sign;
		const int grade_to_exec;

		Form &operator=(const Form &src);
		Form();
	
	public:
		Form(int sign, int exec, const std::string name);
		Form(const Form &src);
		~Form();
		
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw(){return ("Grade too high");}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw(){return ("Grade too low");}
		};

		std::string getName()const;
		int	getGrade_to_sign()const;
		int	getGrade_to_exec()const;
		bool getsign() const;

		void beSigned(const Bureaucrat &src);
};

std::ostream	&operator<<(std::ostream & out, const Form & Form);

#endif