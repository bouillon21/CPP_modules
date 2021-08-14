//
// Created by Cherlyn Shelli on 8/14/21.
//
#include <iostream>
#include "Karen.h"

int main ()
{
    std::string level;
    Karen		myKaren;

    std::cout<<"введите левл: ";
    std::cin >> level;
    myKaren.complain(level);
    return 0;
}
