#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(){
    std::cout << "DiamondTrap constructor is called\n";
    _Name = "";
    ClapTrap::_Name = "_clap_name";
    _HitPoint = FragTrap::_HitPoint;
    _EnergyPoint = ScavTrap::_EnergyPoint;
    _AttackDamage = FragTrap::_AttackDamage;
}

DiamondTrap::DiamondTrap(const std::string &name){
    std::cout << "DiamondTrap constructor is called\n";
    _Name = name;
    ClapTrap::_Name = name + "_clap_name";
    _HitPoint = FragTrap::_HitPoint;
    _EnergyPoint = ScavTrap::_EnergyPoint;
    _AttackDamage = FragTrap::_AttackDamage;

}

DiamondTrap::DiamondTrap(const DiamondTrap &obj){
    std::cout << "DiamondTrap copy constructor is called\n";
    *this = obj;

}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj){
    std::cout << "DiamondTrap copy assignment constructor is called\n";
    _Name = obj._Name;
    ClapTrap::_Name = obj.ClapTrap::_Name;
    _HitPoint = obj._HitPoint;
    _EnergyPoint = obj._EnergyPoint;
    _AttackDamage = obj._AttackDamage;
    return *this;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap destructor is called\n";
}

void    DiamondTrap::whoAmI(){

    std::cout << "DiamondTrap name is " << _Name << " and ClapTrap name is ";
    std::cout << ClapTrap::_Name << '\n'; 
}