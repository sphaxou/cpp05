#include "Bureaucrat.hpp"
#include <iostream>
#include <string>


int main()
{
	try
	{
		std::cout << "grade 0" << std::endl;
		Bureaucrat a("Paul", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "\ngrade 151" << std::endl;
		Bureaucrat a("Paul", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "\ninc grade 1" << std::endl;
		Bureaucrat a("best", 1);
		a.incGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "\ndec grade 150" << std::endl;
		Bureaucrat b("worst", 150);
		b.decGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat a("Paul", 50);
		std::cout << a << std::endl;
		a.incGrade();
		std::cout << a << std::endl;
		a.decGrade();
		std::cout << a << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}