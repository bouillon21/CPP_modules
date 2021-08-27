//
// Created by Cherlyn Shelli on 8/27/21.
//

#include "WrongDog.h"

WrongDog::WrongDog() {
    std::cout << "Creates WrongDog" << std::endl;
    this->_type = "WrongDog";
}

WrongDog::~WrongDog() {
    std::cout << "WrongDog destroy" << std::endl;
}

WrongDog::WrongDog(const WrongDog &wrongDog) {
    std::cout << "Created copy"<<std::endl;
    *this = wrongDog;
}

WrongDog &WrongDog::operator=(const WrongDog &wrongDog) {
    std::cout<<"Assignation operator called"<<std::endl;
    if (this != &wrongDog)
        _type = wrongDog.getType();
    return (*this);
}
