//
// Created by Cherlyn Shelli on 8/31/21.
//

#ifndef PR____ROBOTOMYREQUESTFORM_H
#define PR____ROBOTOMYREQUESTFORM_H

#include "Form.h"

class RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm(std::string target);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &copy);

    virtual void action() const;
    virtual void execute(const Bureaucrat &executor) const;
};


#endif //PR____ROBOTOMYREQUESTFORM_H
