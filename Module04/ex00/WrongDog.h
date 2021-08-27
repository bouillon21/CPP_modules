//
// Created by Cherlyn Shelli on 8/27/21.
//

#ifndef PR____WRONGDOG_H
#define PR____WRONGDOG_H


#include "WrongAnimal.h"

class WrongDog : public WrongAnimal{

public:
    WrongDog();
    ~WrongDog();
    WrongDog(const WrongDog &wrongDog);
    WrongDog & operator = (const WrongDog &wrongDog);
};

#endif //PR____WRONGDOG_H
