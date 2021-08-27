//
// Created by Cherlyn Shelli on 8/27/21.
//

#include "Dog.h"

Dog::Dog() {
    this->_type = "Dog";
    std::cout << "Dog created" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destruct" << std::endl;
}

Dog::Dog(const Dog &Dog) {
    std::cout << "Created copy"<<std::endl;
    *this = Dog;
}

Dog &Dog::operator=(const Dog &Dog) {
    std::cout<<"Assignation operator called"<<std::endl;
    if (this != &Dog)
        _type = Dog.getType();
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "gaf"<<std::endl;
}