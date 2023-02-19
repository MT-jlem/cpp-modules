#include "Ice.hpp"
#include <iostream>
#include "ICharacter.hpp"
#include "Character.hpp"

Ice::Ice():AMateria("ice"){
}

Ice::Ice(const Ice &obj): AMateria(obj){
    *this = obj;
}

Ice::~Ice(){
}

Ice &Ice::operator=(const Ice &obj){
    if(this != &obj){
        this->_type = obj._type;
    }
    return *this;
}


Ice    *Ice::clone() const{
    Ice *tmp = new Ice;
    return tmp;
}

void    Ice::use(ICharacter &target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< '\n';
}
