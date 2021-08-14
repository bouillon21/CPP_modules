//
// Created by Cherlyn Shelli on 8/12/21.
//
#include "Zombie.h"

int main (int argc, char **argv)
{
    int i;
    int N;

    i = -1;
    N = 0;
    if (argc == 2)
        N = atoi(argv[1]);
    Zombie *Horde = zombieHorde(N,"steve");
    while (++i < N)
        Horde[i].announce();
    delete []Horde;
}
