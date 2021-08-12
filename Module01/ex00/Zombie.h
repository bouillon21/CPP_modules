#ifndef PR____ZOMBIE_H
#define PR____ZOMBIE_H
#include <iostream>

class Zombie {
private:
    std::string name;
public:
    Zombie(const std::string &name);
    Zombie();
    ~Zombie();
    void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif //PR____ZOMBIE_H
