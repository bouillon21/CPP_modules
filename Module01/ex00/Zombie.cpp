//
// Created by Cherlyn Shelli on 8/12/21.
//

#include "Zombie.h"

Zombie::Zombie(const std::string &name) : name(name) {};

Zombie::~Zombie() {
    std::cout<<"<"<< this->name<<"> death"<<std::endl;
}

void Zombie::announce( void )
{
    std::cout<<"<"<<this->name<<"> BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie(){};