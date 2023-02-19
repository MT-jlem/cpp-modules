#include "Animal.hpp"
#include <iostream>

Animal::Animal(){
    std::cout << "Animal constructor is called\n";
    _type = "Unknown";
}

Animal::Animal(std::string type){
    std::cout << "Animal constructor is called\n";
    _type = type;
}

Animal::Animal(const Animal &obj){
    std::cout << "Animal copy constructor is called\n";
    *this = obj;
}

Animal  &Animal::operator=(const Animal &obj){
    std::cout << "Animal copy assignment operator is called\n";
    if(this != &obj){
        this->_type = obj._type;
    }
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal destructor is called\n";
}

void    Animal::makeSound() const{

    std::cout << "Animal sound\n";
}

std::string Animal::getType()const {
    return  _type;
}