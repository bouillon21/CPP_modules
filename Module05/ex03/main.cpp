#include "Bureaucrat.hpp"
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Intern.hpp"

int main(){
	try {
		Intern noob;
		Form *newForm = noob.makeForm("shrubbery request", "MR");
		Bureaucrat Hermes("Hermes Conrad", 5);
		Hermes.signForm(*newForm);
		Hermes.executeForm(*newForm);
		
		delete newForm;
		newForm = noob.makeForm("robotomy request", "Boom");
	
		Hermes.signForm(*newForm);
		Hermes.executeForm(*newForm);
	
		delete newForm;
		newForm = noob.makeForm("random request", "Bastic");

		Hermes.signForm(*newForm);
		Hermes.executeForm(*newForm);
		delete newForm;
	} catch (std::exception & e) {
		std::cout<<e.what()<<std::endl;
	}
}