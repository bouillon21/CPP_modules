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
    void setName(const std::string &name);
    void announce( void );
};

Zombie* newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );
void randomChump( std::string name );

#endif //PR____ZOMBIE_H
