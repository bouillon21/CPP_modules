//
// Created by Cherlyn Shelli on 8/12/21.
//
#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
    int i = -1;
    Zombie *Horde = new Zombie[N];
    while (++i < N)
        Horde[i].setName(name);
    return (&Horde[0]);
}

