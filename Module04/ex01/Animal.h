//
// Created by Cherlyn Shelli on 8/27/21.
//

#ifndef PR____ANIMAL_H
#define PR____ANIMAL_H

#include <iostream>
#include <string>


class Animal {
protected:
    std::string _type;
public:
    Animal();
    virtual ~Animal();
    Animal(const Animal &animal);
    Animal & operator = (const Animal &animal);

    virtual void makeSound() const;
    virtual std::string getType() const;
};


#endif //PR____ANIMAL_H
