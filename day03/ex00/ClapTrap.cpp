#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
    :_Name(), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0){
        std::cout << "Constructor is called\n";
    }

ClapTrap::ClapTrap(std::string name)
    :_Name(name), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0){
        std::cout << "Constructor is called\n";
}

ClapTrap::ClapTrap(ClapTrap &obj){
    std::cout << "Copy constructor is called\n";
    *this = obj;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor is called\n";
}

ClapTrap    &ClapTrap::operator=(ClapTrap &obj){
    std::cout << "Copy assignment operator is called\n";
    if(this != &obj)
    {
        this->_Name = obj._Name;
        this->_AttackDamage = obj._AttackDamage;
        this->_EnergyPoint = obj._EnergyPoint;
        this->_HitPoint = obj._HitPoint;
    }
    return *this;
}

void    ClapTrap::attack(const std::string &target){
    if (_EnergyPoint > 0)
    {
        _EnergyPoint--;
        std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing ";
        std::cout << _AttackDamage << " points of damage !\n";
    }
    else
        std::cout << "No energy point left\n";
}

void    ClapTrap::takeDamage(unsigned int amount){
    _HitPoint -= amount;
    std::cout << "ClapTrap " << _Name << " took " << amount << " points of damage\n";
}

void    ClapTrap::beRepaired(unsigned int amount){
    if (_EnergyPoint > 0){
        _EnergyPoint--;
        _HitPoint += amount;
        std::cout << "ClapTrap " << _Name << " recovered " << amount << " hit points\n";
    }
    else
        std::cout << "No energy point left\n";
}

unsigned int    ClapTrap::getAttackDamage(){

    return _AttackDamage;
}