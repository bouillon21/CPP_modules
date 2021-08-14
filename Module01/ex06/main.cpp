//
// Created by Cherlyn Shelli on 8/14/21.
//
#include <iostream>
#include "Karen.h"

int main (int argc, char **argv)
{
    Karen		myKaren;

    if (argc == 2 && argv[1])
        myKaren.complain(argv[1]);
    return 0;
}
