//
// Created by Cherlyn Shelli on 8/23/21.
//

#include "ClapTrap.h"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(const std::string &name) : Name(name), Hitpoints(10), Energy(10), Damage(0){
    std::cout << "ClapTrap < " << BLUE <<this->Name << RESET << " > Created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
    std::cout<<BLUE<<"Copy constructor called"<<RESET<<std::endl;
    *this = src;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap < " << BLUE <<this->Name << RESET << " > Disable!" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap < " << BLUE <<this->Name << RESET << " > attack < "
        << BROWN << target << RESET << " >, causing < "
        << RED << this->Damage << RESET << " > points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->Hitpoints -= amount;
    std::cout << "ClapTrap < " << BLUE << this->Name << RESET
        << " > take < " << RED << amount << RESET << " > Damage!!";
    std::cout << "He has < " << GREEN << this->Hitpoints << RESET << " > hp last" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->Hitpoints += amount;
    std::cout << "ClapTrap < " << BLUE <<this->Name << RESET
        << " > recovered < " << GREEN << amount << RESET << " > Health!";
    std::cout << "He has < " << GREEN << this->Hitpoints << RESET << " > hp last" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &value) {
    std::cout<<RANDOM<<"Assignation operator called"<<RESET<<std::endl;
    if (this != &value)
    {
        Name = value.getName();
        Hitpoints = value.getHitpoints();
        Energy = value.getEnergy();
        Damage = value.getDamage();
    }
    return (*this);
}

const std::string &ClapTrap::getName() const {
    return Name;
}

unsigned int ClapTrap::getHitpoints() const {
    return Hitpoints;
}

unsigned int ClapTrap::getEnergy() const {
    return Energy;
}

unsigned int ClapTrap::getDamage() const {
    return Damage;
}


