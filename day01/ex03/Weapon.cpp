#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(){
};

Weapon::Weapon(std::string type){
    _type = type;
}

Weapon::~Weapon(){
};

std::string const &Weapon::getType(){
    return _type;
}

void    Weapon::setType(std::string newType){
    this->_type = newType;
}