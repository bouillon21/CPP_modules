//
// Created by Cherlyn Shelli on 8/27/21.
//

#ifndef PR____WRONGANIMAL_H
#define PR____WRONGANIMAL_H

#include <iostream>
class WrongAnimal{

protected:
    std::string _type;
public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(const WrongAnimal &wrongAnimal);
    WrongAnimal & operator = (const WrongAnimal &wrongAnimal);

    virtual void makeSound() const;
    std::string getType() const;
};


#endif //PR____WRONGANIMAL_H
