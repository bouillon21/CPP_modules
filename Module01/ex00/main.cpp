//
// Created by Cherlyn Shelli on 8/12/21.
//
#include "Zombie.h"

int main ()
{
    Zombie first("first");
    first.announce();

    Zombie *second = newZombie("second");
    second->announce();
    delete (second);

    randomChump("third");
}
