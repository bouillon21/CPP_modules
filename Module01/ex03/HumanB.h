//
// Created by Cherlyn Shelli on 8/12/21.
//

#ifndef PR____HUMANB_H
#define PR____HUMANB_H


#include "Weapon.h"

class HumanB {
private:
public:
    virtual ~HumanB();

private:
    Weapon *weapon;
    std::string name;
public:
    HumanB(const std::string &name);
    void attack();
    void setWeapon(Weapon &weapon);
};


#endif //PR____HUMANB_H
