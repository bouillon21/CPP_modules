#include "Bureaucrat.hpp"

Bureaucrat::GradeTooLowException::GradeTooLowException() : std::exception() {};

Bureaucrat::GradeTooHighException::GradeTooHighException() : std::exception() {};

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {};

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy) {
	if (this != &copy)
	{
		(std::string)this->name = copy.getName();
		this->grade = copy.getGrade();
	}
	return *this;
}

const std::string Bureaucrat::getName() const {
	return this->name;
}

int Bureaucrat::getGrade() const {
	return this->grade;
}

void Bureaucrat::incrementGrade(int n) {
	this->grade -= n;
	if (this->grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
}

void Bureaucrat::decrementGrade(int n) {
	this->grade += n;
	if (this->grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return os;
}