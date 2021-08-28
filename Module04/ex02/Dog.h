//
// Created by Cherlyn Shelli on 8/27/21.
//

#ifndef PR____DOG_H
#define PR____DOG_H


#include "AAnimal.h"
#include "Brain.h"

class Dog : public AAnimal{
private:
    Brain *brain;
public:
    Dog();
    ~Dog();
    Dog(const Dog &Dog);
    Dog & operator = (const Dog &Dog);

    virtual void makeSound() const;
};


#endif //PR____DOG_H
