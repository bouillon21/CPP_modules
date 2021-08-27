//
// Created by Cherlyn Shelli on 8/27/21.
//

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
    std::cout << "Created WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destroy" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) {
    std::cout << "Created copy"<<std::endl;
    *this = wrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal) {
    std::cout<<"Assignation operator called"<<std::endl;
    if (this != &wrongAnimal)
        _type = wrongAnimal.getType();
    return (*this);
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongRey: who i"<< std::endl;
}

std::string WrongAnimal::getType() const {
    return _type;
}
