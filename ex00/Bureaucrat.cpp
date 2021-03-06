/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:45:20 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/21 15:46:31 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(const std::string &n, int i):name(n)
{
	if (i > 150)
		throw Bureaucrat::GradeTooLowException();
	if (i < 1)
		throw Bureaucrat::GradeTooHighException();
	grade = i;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src): name(src.getName())
{
	int i;
	i = src.getGrade();
	if (i > 150)
		throw Bureaucrat::GradeTooLowException();
	if (i < 1)
		throw Bureaucrat::GradeTooHighException();
	grade = i;
}

Bureaucrat::~Bureaucrat(){}

std::string Bureaucrat::getName(void)const
{
	return (name);
}

int	Bureaucrat::getGrade(void)const
{
	return (grade);
}

void Bureaucrat::incGrade()
{
	if (grade < 2)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void Bureaucrat::decGrade()
{
	if (grade > 149)
		throw Bureaucrat::GradeTooLowException();
	grade++;
}

std::ostream	&operator<<(std::ostream & out, const Bureaucrat & bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}