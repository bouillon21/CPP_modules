//
// Created by Cherlyn Shelli on 8/31/21.
//

#ifndef PR____PRESIDENTIALPARDONFORM_H
#define PR____PRESIDENTIALPARDONFORM_H


#include "Form.h"

class PresidentialPardonForm : public Form {
public:
    PresidentialPardonForm(std::string target);
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &copy);

    virtual void action() const;
    virtual void execute(const Bureaucrat &executor) const;
};


#endif //PR____PRESIDENTIALPARDONFORM_H
