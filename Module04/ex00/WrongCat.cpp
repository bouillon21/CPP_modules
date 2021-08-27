//
// Created by Cherlyn Shelli on 8/27/21.
//

#include "WrongCat.h"

WrongCat::WrongCat() {
    std::cout << "Creates WrongCat" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destroy" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat) {
    std::cout << "Created copy"<<std::endl;
    *this = wrongCat;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongCat) {
    std::cout<<"Assignation operator called"<<std::endl;
    if (this != &wrongCat)
        _type = wrongCat.getType();
    return (*this);
}
