//
// Created by Lorent Evenstar on 8/22/21.
//

#ifndef CPP_STUDY_INTERN_HPP
#define CPP_STUDY_INTERN_HPP

#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

class Intern {

private:
	std::string	arrayFormNames[3];
	Form *(Intern::*func[3])(std::string target);


public:
	Intern();
	~Intern();
	Intern(const Intern &copy);

	Intern &operator=(const Intern &copy);
	Form *newShrubberyCreation(std::string target);
	Form *newRobotomyRequest(std::string target);
	Form *newPresidentialPardon(std::string target);
	Form *makeForm(std::string formName, std::string target);

	class FormNotFoundException : public std::exception {
	public:
		FormNotFoundException();
		virtual ~FormNotFoundException() throw ();
		virtual const char* what() const throw();
	};
};


#endif //CPP_STUDY_INTERN_HPP
