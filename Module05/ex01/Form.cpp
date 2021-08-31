//
// Created by Cherlyn Shelli on 8/31/21.
//

#include "Form.h"

Form::GradeTooLowException::GradeTooLowException() : std::exception() {}

Form::GradeTooHighException::GradeTooHighException() : std::exception() {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Form::GradeTooLowException::what() const throw() {
    return "grade required to sign it, is too low\n";
}

const char *Form::GradeTooHighException::what() const throw() {
    return "grade required to sign it, is too high\n";
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : \
name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
if (gradeToSign < 1 || gradeToExecute < 1) {
    throw Form::GradeTooHighException();
}
else if (gradeToSign > 150 || gradeToExecute > 150) {
    throw Form::GradeTooLowException();
}
};

Form::~Form() {};

Form::Form(const Form &copy) : name(copy.name), isSigned(copy.isSigned), \
gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute) {}

std::string Form::getName() const {
    return this->name;
}

bool Form::getSignatureStatus() const {
    return this->isSigned;
}

int Form::getGradeSign() const {
    return this->gradeToSign;
}

int Form::getGradeExecute() const {
    return this->gradeToExecute;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() <= this->gradeToSign) {
        if (this->isSigned) {
            throw std::string("the form has already been signed");
        }
        else {
            this->isSigned = true;
        }
    }
    else {
        throw Form::GradeTooLowException();
    }
}

std::ostream &operator<<(std::ostream &os, const Form &obj) {
    os << "THE STATE OF THE FORM.\nName: " << obj.getName() << "\nSignature status: " << obj.getSignatureStatus() << \
    "\nGrade required to sign it: " << obj.getGradeSign() << "\nGrade required to execute it: " << obj.getGradeExecute() << "\n";
    return os;
}