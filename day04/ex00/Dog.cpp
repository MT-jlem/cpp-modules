#include "Dog.hpp"
#include <iostream>

Dog::Dog(){
    std::cout << "Dog constructor is called\n";
    _type = "Dog";
}

Dog::Dog(const Dog &obj){
    std::cout << "Dog copy constructor is called\n";
    *this = obj;
}

Dog &Dog::operator=(const Dog &obj){
    std::cout << "Dog copy assignment operator is called\n";
    if (this != &obj){
        this->_type = obj._type;
    }
    return *this;
}
Dog::~Dog(){
    std::cout << "Dog destructor is called\n";
}

void    Dog::makeSound(void) const{
    std::cout << "wooof\n";
}
