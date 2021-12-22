#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>


int main()
{
	try
	{
		std::cout << "grade 0" << std::endl;
		Form a(0, 50, "A");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "\ngrade 151" << std::endl;
		Form a(50, 151, "A");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "\ntest beSigned with wrong grade" << std::endl;
		Bureaucrat a("Paul", 50);
		Form A(40, 40, "A");
		std::cout << A << std::endl;
		A.beSigned(a);
		std::cout << A << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "\ntest beSigned success" << std::endl;
		Bureaucrat a("Paul", 30);
		Form A(40, 40, "A");
		std::cout << A << std::endl;
		A.beSigned(a);

		std::cout << A << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Bureaucrat a("Paul", 30);
	Form A(40, 40, "A");
	Form B(20, 20, "B");
	a.signForm(A);
	a.signForm(B);
	return (0);
}