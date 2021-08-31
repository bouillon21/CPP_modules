//
// Created by Cherlyn Shelli on 8/31/21.
//

#ifndef PR____FORM_H
#define PR____FORM_H


#include "Bureaucrat.hpp"


class Bureaucrat;

class Form {

private:
    const std::string name;
    const std::string target;
    bool		isSigned;
    const int 	gradeToSign;
    const int 	gradeToExecute;
    Form();

public:
    Form(std::string name, int gradeToSign, int gradeToExecute);
    Form(std::string name, std::string target, int gradeToSign, int gradeToExecute);
    virtual ~Form();
    Form(const Form &copy);

    void beSigned(Bureaucrat &bureaucrat);
    std::string getName() const;
    bool getSignatureStatus() const;
    int getGradeSign() const;
    int getGradeExecute() const;
    const std::string &getTarget() const;
    virtual void execute(const Bureaucrat &executor) const;
    virtual void action() const = 0;

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

    class	SignatureException : public std::exception {
    public:
        SignatureException();
        virtual ~SignatureException() throw ();
        virtual const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, const Form &form);


#endif //PR____FORM_H
