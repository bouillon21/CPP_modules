#include "Bureaucrat.hpp"
#include "Form.h"


void Doc(int gradeToSign, int gradeToExecute)
{
    std::cout << YELLOW << "Doc (" << RED << gradeToSign << RESET
        << ":" << RED << gradeToExecute << RESET << ")" << std::endl;
    try
    {
        Form		f("Document", gradeToSign, gradeToExecute);
        std::cout << GREEN << "Yes" << std::endl << RESET  << f <<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << RED << "Document: " << e.what() << RESET << std::endl;
    }
}


int		main() {
    try
    {
        std::cout << "-------------------------------------" << std::endl;
        {
            Bureaucrat	n("Obama", 10);
            Form		f("Document", 5, 5);

            std::cout << YELLOW << n << std::endl << PURPPLE << f << RESET <<std::endl <<std::endl;
            n.signForm(f);
            n.incrementGrade(5);
            std::cout << YELLOW << n << std::endl << PURPPLE << f << RESET <<std::endl <<std::endl;
            n.signForm(f);
            std::cout  << PURPPLE << f << RESET <<std::endl <<std::endl;
            n.signForm(f);
        }
        std::cout << std::endl << "-------------------------------------" << std::endl;
        {
            Doc(150, 1);
            Doc(151, 1);
            Doc(0, 1);
            Doc(150, 200);
            Doc(150, 0);
        }
        std::cout << std::endl << "-------------------------------------" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << RED << "Bureaucrat failure: " << RESET << e.what() << RESET << std::endl;
    }
    return (0);
}