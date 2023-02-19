#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal constructor is called\n";
    _type = "Unknown";
}

WrongAnimal::WrongAnimal(std::string type){
    std::cout << "WrongAnimal constructor is called\n";
    _type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj){
    std::cout << "WrongAnimal copy constructor is called\n";
    *this = obj;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &obj){
    std::cout << "WrongAnimal copy assignment operator is called\n";
    if(this != &obj){
        this->_type = obj._type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor is called\n";
}

void    WrongAnimal::makeSound() const{

    std::cout << "WrongAnimal sound\n";
}

std::string WrongAnimal::getType()const {
    return  _type;
}