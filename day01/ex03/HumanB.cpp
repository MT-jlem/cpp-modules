#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name){
    this->name = name;
}

HumanB::HumanB(std::string name, Weapon weapon){
    this->name = name;
    this->weapon = &weapon;
}

HumanB::~HumanB(){
}

void    HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}

void    HumanB::attack(){
    if (weapon)
        std::cout << name << ' ' << "attacks with their " << this->weapon->getType() << '\n';
    else
        std::cout << name << " has no weapon\n";
}