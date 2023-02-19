#include "Cure.hpp"
#include <iostream>
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

Cure::Cure():AMateria("cure"){
}

Cure::Cure(const Cure &obj): AMateria(obj){
    *this = obj;
}

Cure::~Cure(){
}

Cure    &Cure::operator=(const Cure &obj){
    if(this != &obj){
        this->_type = obj._type;
    }
    return *this;
}

Cure *Cure::clone() const{
    Cure *tmp = new Cure;
    return tmp;
}
void    Cure::use(ICharacter &target){
    std::cout << "* heals " << target.getName() << "\'s wounds *\n";
}