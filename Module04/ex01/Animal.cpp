//
// Created by Cherlyn Shelli on 8/27/21.
//

#include "Animal.h"

Animal::Animal() : _type("Animal") {
    std::cout << "Created Animal"<<std::endl;

}

Animal::~Animal() {
    std::cout << "Animal destroy"<< std::endl;
}

Animal::Animal(const Animal &animal) {
    std::cout << "Created copy"<<std::endl;
    *this = animal;
}

Animal &Animal::operator=(const Animal &animal) {
    std::cout<<"Assignation operator called"<<std::endl;
    if (this != &animal)
        _type = animal.getType();
    return (*this);
}

std::string Animal::getType() const {
    return _type;
}

void Animal::makeSound() const {
    std::cout << "Rey: who i"<< std::endl;
}



