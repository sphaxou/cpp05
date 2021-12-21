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

class Bureaucrat
{
	private:
		const std::sring	name;
		int					grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &src);

		class GradeTooHighException: public std::exception
		{
			public:
				GradeTooHighException() throw;
				virtual const char *what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				GradeTooLowException() throw;
				virtual const char *what() const throw();
		}

		std::string getName()const;
		int	getGrade()const;

		void incGrade();
		void decGrade();
};

std::ostream &operator<<(std::ostram &out, const Bureaucrat &Bureaucrat);

#endif
