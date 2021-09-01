#ifndef CPP_STUDY_BUREAUCRAT_HPP
#define CPP_STUDY_BUREAUCRAT_HPP

# define RED			"\033[1;31m"
# define RESET			"\033[0m"
# define YELLOW			"\033[1;33m"
# define BLUE			"\x1b[34m"
# define GREEN			"\x1b[32m"
# define WHITE			"\033[1;39m"
# define PURPPLE        "\033[0m\033[1;35m"

#include <iostream>
#include "Form.h"

class Form;

class Bureaucrat {

private:
	const std::string name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat &operator=(const Bureaucrat &copy);

	const std::string getName(void) const;
	int getGrade(void) const;
	void incrementGrade(int n);
	void decrementGrade(int n);
	void signForm(Form &form);
	void executeForm(const Form &form);

	class	GradeTooHighException : public std::exception {
	public:
		GradeTooHighException();
		virtual ~GradeTooHighException() throw ();
		virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception {
	public:
		GradeTooLowException();
		virtual ~GradeTooLowException() throw ();
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif //CPP_STUDY_BUREAUCRAT_HPP
