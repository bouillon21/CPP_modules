#include "Bureaucrat.hpp"
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int		main() {
    srand(time(NULL));
    try
    {
        Bureaucrat	nick("Nick", 150);
        Bureaucrat	tom("Tom", 1);
        std::cout << "------------SHRUBBERY CREATION FORM------------" << std::endl;
        {
            ShrubberyCreationForm	form("Home");

            std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << form << "\033[0m" <<std::endl <<std::endl;
            std::cout << "\033[1;34m";
            nick.executeForm(form);
            tom.executeForm(form);
            std::cout << "\033[0m" <<std::endl;
            std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << form << "\033[0m" <<std::endl <<std::endl;
            std::cout << "\033[1;34m";
            nick.signForm(form);
            tom.signForm(form);
            std::cout << "\033[0m" <<std::endl;
            std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << form << "\033[0m" <<std::endl <<std::endl;
            std::cout << "\033[1;34m";
            nick.executeForm(form);
            tom.executeForm(form);
            std::cout << "\033[0m";
        }
        std::cout << "------------ROBOTOMY REQUEST FORM------------" << std::endl;
        {
            RobotomyRequestForm	form("Home");

            std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << form << "\033[0m" <<std::endl <<std::endl;
            std::cout << "\033[1;34m";
            nick.executeForm(form);
            tom.executeForm(form);
            nick.signForm(form);
            tom.signForm(form);
            std::cout << "\033[0m" <<std::endl;
            std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << form << "\033[0m" <<std::endl <<std::endl;
            std::cout << "\033[1;34m";
            nick.executeForm(form);
            tom.executeForm(form);
            std::cout << "\033[0m" <<std::endl;
            std::cout << "\033[1;34m";
            nick.executeForm(form);
            tom.executeForm(form);
            std::cout << "\033[0m" <<std::endl;
            std::cout << "\033[1;34m";
            nick.executeForm(form);
            tom.executeForm(form);
            std::cout << "\033[0m" <<std::endl;
            std::cout << "\033[1;34m";
            nick.executeForm(form);
            tom.executeForm(form);
            std::cout << "\033[0m";
        }
        std::cout << "------------PRESIDENTIAL PARDON FORM------------" << std::endl;
        {
            PresidentialPardonForm	form("Home");

            std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << form << "\033[0m" <<std::endl <<std::endl;
            std::cout << "\033[1;34m";
            nick.executeForm(form);
            tom.executeForm(form);
            std::cout << "\033[0m" <<std::endl;
            std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << form << "\033[0m" <<std::endl <<std::endl;
            std::cout << "\033[1;34m";
            nick.signForm(form);
            tom.signForm(form);
            std::cout << "\033[0m" <<std::endl;
            std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << form << "\033[0m" <<std::endl <<std::endl;
            std::cout << "\033[1;34m";
            nick.executeForm(form);
            tom.executeForm(form);
            std::cout << "\033[0m";
        }
    }
    catch (std::exception &e)
    {
        std::cout << "\033[1;31mBureaucrat failure: " << e.what() << "\033[0m" << std::endl;
    }
    return (0);
}