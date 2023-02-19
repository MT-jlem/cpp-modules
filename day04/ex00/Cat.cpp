#include "Cat.hpp"
#include <iostream>

Cat::Cat(){
    std::cout << "Cat constructor is called\n";
    _type = "Cat";
}

Cat::Cat(const Cat &obj){
    std::cout << "Cat copy constructor is called\n";
    *this = obj;
}

Cat &Cat::operator=(const Cat &obj){
    std::cout << "Cat copy assignment operator is called\n";
    if(this != &obj){
        this->_type = obj._type;
    }
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat destructor is called\n";
}

void    Cat::makeSound(void) const{
    std::cout << "meooow\n";
}
