//
// Created by Cherlyn Shelli on 8/12/21.
//

#include <iostream>
#include "HumanB.h"


void HumanB::attack()
{
    if (this->weapon != NULL)
        std::cout << this->name << " attacks with his " << this->weapon->getType()<<std::endl;
    else
        std::cout << this->name << " unarmed" <<std::endl;
}

HumanB::HumanB(const std::string &name) : name(name) {}

void HumanB::setWeapon(Weapon &weapon) {
    HumanB::weapon = &weapon;
}

HumanB::~HumanB() {
    std::cout << this->name << " death" << std::endl;
}
