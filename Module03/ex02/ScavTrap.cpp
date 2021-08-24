//
// Created by Cherlyn Shelli on 8/23/21.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap(){}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name){
    this->Hitpoints = 100;
    this->Energy = 50;
    this->Damage = 20;
    std::cout << "ScavTrap < " << BLUE << this->Name << RESET << " > Created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src){
    std::cout<<BLUE<<"Copy constructor called"<<RESET<<std::endl;
    *this = src;
}


ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap < " << BLUE <<this->Name << RESET << " > Disable!" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap < " << BLUE <<this->Name << RESET << " > attack < "
    << BROWN << target << RESET << " >, causing < "
    << RED << this->Damage << RESET << " > points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    this->Hitpoints -= amount;
    if (Hitpoints < 0 ) Hitpoints = 0;
    std::cout << "ScavTrap < " << BLUE << this->Name << RESET
    << " > take < " << RED << amount << RESET << " > Damage!!";
    std::cout << "He has < " << GREEN << this->Hitpoints << RESET << " > hp last" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    this->Hitpoints += amount;
    std::cout << "ScavTrap < " << BLUE <<this->Name << RESET
    << " > recovered < " << GREEN << amount << RESET << " > Health!";
    std::cout << "He has < " << GREEN << this->Hitpoints << RESET << " > hp last" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "🛡 FragTrap < " << RANDOM << this->Name << RESET<< " > have entered in Gate keeper mode 🛡️" << std::endl;
}
