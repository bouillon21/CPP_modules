//
// Created by Cherlyn Shelli on 8/23/21.
//

#ifndef PR____CLAPTRAP_H
#define PR____CLAPTRAP_H

#include <iostream>
#include <string>

# define RED "\033[1;38;2;255;0;0m"
# define GREEN "\033[1;38;2;0;200;0m"
# define BLUE "\033[1;38;2;0;0;255m"
# define BROWN "\033[1;38;2;200;60;60m"
# define RANDOM "\033[1;38;2;90;200;90m"
# define RESET "\033[0m"

class ClapTrap {

private:
    std::string Name;
    unsigned int Hitpoints;
    unsigned int Energy;
    unsigned int Damage;

public:
    ClapTrap();
    ClapTrap(const std::string &name);
    ClapTrap( ClapTrap const & src );
    virtual ~ClapTrap();
    ClapTrap & operator = (ClapTrap const & value);


    const std::string &getName() const;
    unsigned int getHitpoints() const;
    unsigned int getEnergy() const;
    unsigned int getDamage() const;


    virtual void attack(std::string const & target);
    virtual void takeDamage(unsigned int amount);
    virtual void beRepaired(unsigned int amount);
};


#endif //PR____CLAPTRAP_H
