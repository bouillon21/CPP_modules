#include "Dog.h"

Dog::Dog() {
    this->_type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog created" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destruct" << std::endl;
    delete this->brain;
}

Dog::Dog(const Dog &Dog) {
    std::cout << "Created copy"<<std::endl;
    *this = Dog;
}

Dog &Dog::operator=(const Dog &Dog) {
    std::cout<<"Assignation operator called"<<std::endl;
    if (this != &Dog)
    {
        _type = Dog.getType();
        Brain *newBrain = new Brain();
        newBrain->setIdeas(Dog.brain->getIdeas());
        this->brain = newBrain;
    }

    return (*this);
}

void Dog::makeSound() const {
    std::cout << "may"<<std::endl;
}