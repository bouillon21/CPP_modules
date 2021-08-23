//
// Created by Cherlyn Shelli on 8/23/21.
//

#include "ClapTrap.h"
#include "ScavTrap.h"

int main ()
{
    ClapTrap	A("jsupergi");
    ScavTrap	B("kraios");

    A.attack("kraios");
    B.takeDamage(0);
    B.beRepaired(10);
    B.guardGate();
}
