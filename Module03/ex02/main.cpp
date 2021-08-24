//
// Created by Cherlyn Shelli on 8/23/21.
//

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"


int main ()
{
    ClapTrap	A("Bulat");
    ScavTrap	B("Peer");
    FragTrap    C("Cshelli");

    A.takeDamage(20);
    A.attack(B.getName());
    B.takeDamage(A.getDamage());
    B.guardGate();
    B.beRepaired(10);
    B.attack(C.getName());
    C.takeDamage(B.getDamage());
    C.highFivesGuys();
    C.beRepaired(B.getDamage());
}
