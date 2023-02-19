#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(){

    std::cout << "FragTrap constructor is called\n";
    _Name = "";
    _HitPoint = 100;
    _EnergyPoint = 100;
    _AttackDamage = 30;
}

FragTrap::FragTrap(const std::string &name){

    std::cout << "FragTrap constructor is called\n";
    _Name = name;
    _HitPoint = 100;
    _EnergyPoint = 100;
    _AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &obj){

    std::cout << "FragTrap copy constructor is called\n";
    *this = obj;
}

FragTrap    &FragTrap::operator=(const FragTrap &obj){

    std::cout << "FragTrap copy assignment operator is called\n";
    if(this != &obj){
        this->_Name = obj._Name;
        this->_AttackDamage = obj._AttackDamage;
        this->_EnergyPoint = obj._EnergyPoint;
        this->_HitPoint = obj._HitPoint;
    }
    return *this;
}

FragTrap::~FragTrap(){

    std::cout << "FragTrap destructor is Called\n";
}

void    FragTrap::highFiveGuys(){

    std::cout << "let's high five\n";
}