//
// Created by Cherlyn Shelli on 8/24/21.
//

#ifndef PR____FRAGTRAP_H
#define PR____FRAGTRAP_H

#include "ScavTrap.h"

class FragTrap : public ClapTrap{
public:
    FragTrap();
    FragTrap(const std::string &name);
    FragTrap(const ScavTrap &src);
    virtual ~FragTrap();

    virtual void attack(std::string const & target);
    virtual void takeDamage(unsigned int amount);
    virtual void beRepaired(unsigned int amount);
    void highFivesGuys(void);
};


#endif //PR____FRAGTRAP_H
