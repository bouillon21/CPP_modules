//
// Created by Cherlyn Shelli on 8/12/21.
//

#include "Zombie.h"

Zombie* newZombie( std::string name )
{
    return (new Zombie(name));
}

