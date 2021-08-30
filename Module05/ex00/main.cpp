//
// Created by Lorent Evenstar on 8/21/21.
//

#include "Bureaucrat.hpp"
#include <string.h>

void standart(std::string name, int grade){
	try
	{
		Bureaucrat n(name, grade);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[1;31mNO:" << name << ": " << e.what() << "\033[0m" << std::endl;
	}
}

void decrement (std::string name, int grade, int decrement)
{
	try
	{
		Bureaucrat n(name, grade);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
		n.decrementGrade(decrement);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[1;31mNO:" << name << ": " << e.what() << "\033[0m" << std::endl;
	}
}

void increment (std::string name, int grade, int increment)
{
	try
	{
		Bureaucrat n(name, grade);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
		n.incrementGrade(increment);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[1;31mNO:" << name << ": " << e.what() << "\033[0m" << std::endl;
	}
}

int		main() {
	std::string name;

	standart("lower", 150);
	standart("higher", 1);
	standart("lower than necessary", 151);
	standart("higher than necessary", 0);
	decrement("l-1", 150, 1);
	increment("h+1", 1, 1);
	decrement("l-1", 140, 1);
	increment("h+1", 10, 1);
	

	return (0);
}