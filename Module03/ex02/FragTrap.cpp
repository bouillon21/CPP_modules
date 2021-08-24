//
// Created by Cherlyn Shelli on 8/24/21.
//

#include "FragTrap.h"

FragTrap::FragTrap(){}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name){
    this->Hitpoints = 100;
    this->Energy = 100;
    this->Damage = 30;
    std::cout << "FragTrap < " << BLUE << this->Name << RESET << " > Created!" << std::endl;
}

FragTrap::FragTrap(const ScavTrap &src){
    std::cout<<BLUE<<"Copy constructor called"<<RESET<<std::endl;
    *this = src;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap < " << BLUE <<this->Name << RESET << " > Disable!" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
    std::cout << "FragTrap < " << BLUE <<this->Name << RESET << " > attack < "
    << BROWN << target << RESET << " >, causing < "
    << RED << this->Damage << RESET << " > points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    this->Hitpoints -= amount;
    if (Hitpoints < 0 ) Hitpoints = 0;
    std::cout << "FragTrap < " << BLUE << this->Name << RESET
    << " > take < " << RED << amount << RESET << " > Damage!!";
    std::cout << "He has < " << GREEN << this->Hitpoints << RESET << " > hp last" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    this->Hitpoints += amount;
    std::cout << "FragTrap < " << BLUE <<this->Name << RESET
    << " > recovered < " << GREEN << amount << RESET << " > Health!";
    std::cout << "He has < " << GREEN << this->Hitpoints << RESET << " > hp last" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "🙏 SUPER ULTIMATE HIGH FIVE 🙏" << std::endl;
}