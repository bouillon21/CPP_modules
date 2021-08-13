//
// Created by Cherlyn Shelli on 8/12/21.
//

#include <iostream>
#include "HumanA.h"

HumanA::HumanA(const std::string &name, Weapon &weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA() {
    std::cout << this->name << " death" << std::endl;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon.getType()<<std::endl;
}


