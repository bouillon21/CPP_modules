//
// Created by Cherlyn Shelli on 8/27/21.
//

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    std::cout << std::endl;

    Animal *animals[50];
    animals[0] = new Dog();
    animals[1] = new Dog();
    animals[2] = new Cat();
    animals[3] = new Cat();
    std::cout << std::endl;


    for (size_t i = 0; i < 4; i++){
        delete animals[i];
    }
    std::cout << std::endl;
    std::cout << std::endl;

    Dog basic;
    {
        Dog tmp = basic;
    }

    return 0;
}
