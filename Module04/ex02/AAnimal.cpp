//
// Created by Cherlyn Shelli on 8/27/21.
//

#include "AAnimal.h"

AAnimal::AAnimal() : _type("AAnimal") {
    std::cout << "Created AAnimal"<<std::endl;

}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destroy"<< std::endl;
}

// AAnimal::AAnimal(const AAnimal &AAnimal) {
//     std::cout << "Created copy"<<std::endl;
//     *this = AAnimal;
// }

// AAnimal &AAnimal::operator=(const AAnimal &AAnimal) {
//     std::cout<<"Assignation operator called"<<std::endl;
//     if (this != &AAnimal)
//         _type = AAnimal.getType();
//     return (*this);
// }

std::string AAnimal::getType() const {
    return _type;
}

void AAnimal::makeSound() const {
    std::cout << "Rey: who i"<< std::endl;
}



