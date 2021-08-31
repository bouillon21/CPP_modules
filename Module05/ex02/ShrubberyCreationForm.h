//
// Created by Cherlyn Shelli on 8/31/21.
//

#ifndef PR____SHRUBBERYCREATIONFORM_H
#define PR____SHRUBBERYCREATIONFORM_H


#include "Form.h"

class ShrubberyCreationForm : public Form {
public:
    ShrubberyCreationForm(std::string target);
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);

    virtual void action() const;
    virtual void execute(const Bureaucrat &executor) const;
};


#endif //PR____SHRUBBERYCREATIONFORM_H
