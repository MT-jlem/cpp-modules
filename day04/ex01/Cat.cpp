#include "Cat.hpp"
#include <iostream>

Cat::Cat(){
    std::cout << "Cat constructor is called\n";
    _type = "Cat";
    brain = new Brain;
}

Cat::Cat(const Cat &obj){
    std::cout << "Cat copy constructor is called\n";
    brain = nullptr;
    *this = obj;
}

Cat &Cat::operator=(const Cat &obj){
    std::cout << "Cat copy assignment operator is called\n";
    if(this != &obj){
        this->_type = obj._type;
        if (brain)
            delete this->brain;
        this->brain = new Brain(*obj.brain);
    }
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat destructor is called\n";
    delete brain;
}

void    Cat::makeSound(void) const{
    std::cout << "meooow\n";
}
