#include "AMateria.hpp"
#include <iostream>
#include "ICharacter.hpp"

AMateria::AMateria(std::string const &type): _type(type){
}

AMateria::AMateria(const AMateria &obj){
    *this = obj;
}

AMateria::~AMateria(){
}

AMateria    &AMateria::operator=(const AMateria &obj){
    if(this  != &obj){
        this->_type = obj._type;
    }
    return *this;
}

std::string const & AMateria::getType() const{
    return _type;
}

void AMateria::use(ICharacter& target){
    std::cout << "AMateria did something to " << target.getName() << '\n';
    //this func is not useful  and it well be overridden anyway;
}
