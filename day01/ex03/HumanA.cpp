#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weap): weapon(weap){
    this->name = name;
}

HumanA::~HumanA(){
}

void    HumanA::attack(){
    std::cout << name << ' ' << "attacks with their " << this->weapon.getType() << '\n';   
}