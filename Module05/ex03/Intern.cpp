//
// Created by Lorent Evenstar on 8/22/21.
//

#include "Intern.hpp"

Intern::Intern() {
	this->arrayFormNames[0] = "shrubbery request";
	this->arrayFormNames[1] = "robotomy request";
	this->arrayFormNames[2] = "random request";

	this->func[0] = &Intern::newShrubberyCreation;
	this->func[1] = &Intern::newRobotomyRequest;
	this->func[2] = &Intern::newPresidentialPardon;
}

Intern::~Intern() {}

Intern::FormNotFoundException::FormNotFoundException() {}

Intern::FormNotFoundException::~FormNotFoundException() throw() {}

const char *Intern::FormNotFoundException::what() const throw() {
	return "Form is not found";
}

Intern::Intern(const Intern &copy) {
	*this = copy;
}

Intern &Intern::operator=(const Intern &copy) {
	if(&copy != this)
	{
		this->arrayFormNames[0] = "shrubbery request";
		this->arrayFormNames[1] = "robotomy request";
		this->arrayFormNames[2] = "random request";

		this->func[0] = &Intern::newShrubberyCreation;
		this->func[1] = &Intern::newRobotomyRequest;
		this->func[2] = &Intern::newPresidentialPardon;
	}
	return *this;
}

Form *Intern::newShrubberyCreation(std::string target) {
	return (new ShrubberyCreationForm(target));
}

Form *Intern::newRobotomyRequest(std::string target) {
	return (new RobotomyRequestForm(target));
}

Form *Intern::newPresidentialPardon(std::string target) {
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string formName, std::string target) {
	for (int i = 0; i < 3; i++) {
		if (formName == this->arrayFormNames[i]) {
			std::cout << "Intern creates " << formName << std::endl;
			return ((this->*func[i])(target));
		}
	}
	throw FormNotFoundException();
}