//
// Created by Cherlyn Shelli on 8/12/21.
//

#ifndef PR____HUMANA_H
#define PR____HUMANA_H


#include <string>
#include "Weapon.h"

class HumanA {
private:
    std::string name;
    Weapon &weapon;
public:
    HumanA(const std::string &name, Weapon &weapon);
    ~HumanA();
    void attack();
};


#endif //PR____HUMANA_H
