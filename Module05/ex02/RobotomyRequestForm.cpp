//
// Created by Cherlyn Shelli on 8/31/21.
//

#include <cstdlib>
#include <ctime>
#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request Form", target, 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy) {}

void RobotomyRequestForm::action() const {
//	srand(time(NULL));
	if (rand() % 2) {
		std::cout << "Bzrzzzzzzz...\n" << this->getTarget() << " has been robotomized successfully" << std::endl;
	}
	else {
		std::cout << "Oh shit, it’s a failure" << std::endl;
	}
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	this->action();
}