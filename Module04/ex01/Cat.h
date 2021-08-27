//
// Created by Cherlyn Shelli on 8/27/21.
//

#ifndef PR____CAT_H
#define PR____CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal{
private:
    Brain *brain;
public:
    Cat();
    ~Cat();
    Cat(const Cat &cat);
    Cat & operator = (const Cat &cat);

    virtual void makeSound() const;
};


#endif //PR____CAT_H
