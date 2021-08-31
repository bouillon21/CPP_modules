//
// Created by Cherlyn Shelli on 8/31/21.
//
#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", target, 25, 5) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy) {}

void PresidentialPardonForm::action() const {
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    this->action();
}
