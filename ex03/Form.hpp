#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	protected:
		bool is_signed;
		const std::string 	name;
		const int grade_to_sign;
		const int grade_to_exec;
		const std::string target;


		Form &operator=(const Form &src);
		Form();
	
	public:
		Form(int sign, int exec, const std::string &name);
		Form(int sign, int exec, const std::string &name, const std::string &target);
		Form(const Form &src);
		virtual ~Form();
		
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
		class IsNotSigned: public std::exception
		{
			public:
				virtual const char *what() const throw(){return("Form isn't signed");}
		};
		class NoTarget: public std::exception
		{
			public:
				virtual const char *what() const throw(){return("Form doesn't have a target");}
		};

		std::string getName()const;
		int	getGrade_to_sign()const;
		int	getGrade_to_exec()const;
		bool getsign() const;

		void beSigned(const Bureaucrat &src);

		void checkexec(const Bureaucrat &executor)const;
		void execute(const Bureaucrat &executor)const;
		virtual void action() const = 0;
};

std::ostream	&operator<<(std::ostream & out, const Form & Form);

#endif