//
// Created by Cherlyn Shelli on 8/27/21.
//

#ifndef PR____WRONGCAT_H
#define PR____WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal{

public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &wrongCat);
    WrongCat & operator = (const WrongCat &wrongCat);
};


#endif //PR____WRONGCAT_H
