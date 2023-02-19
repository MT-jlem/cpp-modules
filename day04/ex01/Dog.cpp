#include "Dog.hpp"
#include <iostream>

Dog::Dog(){
    std::cout << "Dog constructor is called\n";
    brain = new Brain();
    _type = "Dog";
}

Dog::Dog(const Dog &obj){
    std::cout << "Dog copy constructor is called\n";
    brain = nullptr;
    *this = obj;
}

Dog &Dog::operator=(const Dog &obj){
    std::cout << "Dog copy assignment operator is called\n";
    if (this != &obj){
        this->_type = obj._type;
        if (brain)
            delete brain;
        brain = new Brain(*obj.brain);
    }
    return *this;
}
Dog::~Dog(){
    std::cout << "Dog destructor is called\n";
    delete  brain;
}

void    Dog::makeSound(void) const{
    std::cout << "wooof\n";
}
