//
// Created by Cherlyn Shelli on 8/23/21.
//

#include "ClapTrap.h"
#include "ScavTrap.h"

int main ()
{
    ClapTrap	A("Bulat");
    ScavTrap	B("Peer");

    A.attack(B.getName());
    B.takeDamage(A.getDamage());
    B.guardGate();
    B.beRepaired(10);
}
