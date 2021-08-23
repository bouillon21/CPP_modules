//
// Created by Cherlyn Shelli on 8/23/21.
//

#ifndef PR____SCAVTRAP_H
#define PR____SCAVTRAP_H

#include "ClapTrap.h"


class ScavTrap : public ClapTrap{
public:
//    ScavTrap();
    ScavTrap(const std::string &name);
    ScavTrap(const ScavTrap &src);
    virtual ~ScavTrap();

    virtual void attack(std::string const & target);
    virtual void takeDamage(unsigned int amount);
    virtual void beRepaired(unsigned int amount);
    void guardGate(void);
};

#endif //PR____SCAVTRAP_H
