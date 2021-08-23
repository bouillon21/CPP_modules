//
// Created by Cherlyn Shelli on 8/23/21.
//

#include "ClapTrap.h"

int main ()
{
    ClapTrap Bulat = ClapTrap("Bulat");
    ClapTrap Peer = ClapTrap("Peer");

    Bulat.attack("Peer");
    Peer.takeDamage(Bulat.getDamage());
    Peer.beRepaired(3);
}
