//
// Created by Cherlyn Shelli on 8/27/21.
//

#include "Cat.h"

Cat::Cat() {
    this->_type = "Cat";
    std::cout << "Cat created" << std::endl;
}

Cat::~Cat() {
std::cout << "Cat destruct" << std::endl;
}

Cat::Cat(const Cat &cat) {
    std::cout << "Created copy"<<std::endl;
    *this = cat;
}

Cat &Cat::operator=(const Cat &cat) {
    std::cout<<"Assignation operator called"<<std::endl;
    if (this != &cat)
        _type = cat.getType();
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "may"<<std::endl;
}

