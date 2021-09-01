//
// Created by Cherlyn Shelli on 8/31/21.
//

#include "ShrubberyCreationForm.h"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form", target, 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy) {}

void ShrubberyCreationForm::action() const {
    std::ofstream openFile;
    openFile.open(this->getTarget() + "_shrubbery");
    if (!openFile.is_open()) {
        std::cout << "Cannot open \"" << this->getTarget() << "_shrubbery" << "\"" << std::endl;
        return ;
    }
    openFile <<
    "       _-_\n" <<
    "    /~~   ~~\\\n" <<
    " /~~         ~~\\\n" <<
    "{               }\n" <<
    " \\  _-     -_  /\n" <<
    "   ~  \\\\ //  ~\n" <<
    "_- -   | | _- _\n" <<
    "  _ -  | |   -_\n" <<
    "      // \\\\";
    openFile.close();
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    this->action();
}