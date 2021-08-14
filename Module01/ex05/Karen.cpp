//
// Created by Cherlyn Shelli on 8/14/21.
//

#include <iostream>
#include "Karen.h"

Karen::Karen()
{
    arrayLevels[0] = "DEBUG";
    arrayLevels[1] = "INFO";
    arrayLevels[2] = "WARNING";
    arrayLevels[3] = "ERROR";

    arrayMethods[0] = &Karen::debug;
    arrayMethods[1] = &Karen::info;
    arrayMethods[2] = &Karen::warning;
    arrayMethods[3] = &Karen::error;
}

Karen::~Karen() {
    std::cout<<"off Karen";
}

void Karen::debug(void)
{
    std::cout<< "{DEBUG}" <<"I love to get extra bacon for my"
               "7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"<<std::endl;
}

void Karen::info(void)
{
    std::cout<< "{INFO}" <<"I cannot believe adding extra bacon cost more money."
               "You don’t put enough! If you did I would not have to ask for it!"<<std::endl;
}

void Karen::warning(void)
{
    std::cout<< "{WARNING}" <<"I think I deserve to have some extra bacon for free. I’ve been "
               "coming here for years and you just started working here last month."<<std::endl;
}

void Karen::error(void)
{
    std::cout<< "{ERROR}" <<"This is unacceptable, I want to speak to the manager now."<<std::endl;
}

void Karen::complain(std::string level)
{
    for (int i = 0; i < 4; ++i) {
        if (arrayLevels[i] == level) {
            (this->*Karen::arrayMethods[i])();
        }
    }
}
