//
// Created by Cherlyn Shelli on 8/12/21.
//

#ifndef PR____WEAPON_H
#define PR____WEAPON_H


#include <string>

class Weapon {
private:
public:
    Weapon();

private:
    std::string type;
public:
    Weapon(const std::string &type);
    const std::string &getType() const;
    void setType(const std::string &type);
};


#endif //PR____WEAPON_H
