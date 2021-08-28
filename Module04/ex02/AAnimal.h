//
// Created by Cherlyn Shelli on 8/27/21.
//

#ifndef PR____AAnimal_H
#define PR____AAnimal_H

#include <iostream>
#include <string>


class AAnimal {
protected:
    std::string _type;
public:
    AAnimal();
    virtual ~AAnimal();
    // AAnimal(const AAnimal &AAnimal);
    // AAnimal & operator = (const AAnimal &AAnimal);

    virtual void makeSound() const = 0;
    std::string getType() const;
};


#endif //PR____AAnimal_H
