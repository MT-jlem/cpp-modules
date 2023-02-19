#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(){

    std::cout << "ScavTrap constructor is called\n";
    _Name = "";
    _HitPoint = 100;
    _EnergyPoint = 50;
    _AttackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &name){

    std::cout << "ScavTrap constructor is called\n";
    _Name = name;
    _HitPoint = 100;
    _EnergyPoint = 50;
    _AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj){

    std::cout << "ScavTrap copy constructor is called\n";
    *this = obj;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &obj){

    std::cout << "ScavTrap copy assignment operator is called\n";
    if(this != &obj){
        this->_Name = obj._Name;
        this->_AttackDamage = obj._AttackDamage;
        this->_EnergyPoint = obj._EnergyPoint;
        this->_HitPoint = obj._HitPoint;
    }
    return *this;
}

void    ScavTrap::guardGate(){

    std::cout << "ScavTrap " <<_Name << "is now in Gate keeper mode.\n";
}

ScavTrap::~ScavTrap(){

    std::cout << "ScavTrap destructor is Called\n";
}

void    ScavTrap::attack(const std::string &target){
    if (_EnergyPoint > 0)
    {
        _EnergyPoint--;
        std::cout << "ScavTrap " << _Name << " attacks " << target << ", causing ";
        std::cout << _AttackDamage << " points of damage!\n";
    }
    else
        std::cout << "No energy point left\n";
}