/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:04:27 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/21 15:45:14 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>

class Form;

class Bureaucrat
{
	private:
		Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &src);

		const std::string	name;
		int					grade;
	public:
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat();


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
		int	getGrade()const;

		void incGrade();
		void decGrade();

		void signForm(Form &form);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat);

#endif
