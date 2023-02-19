#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(){
    std::cout << "WrongCat constructor is called\n";
    _type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj){
    std::cout << "WrongCat copy constructor is called\n";
    *this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat &obj){
    std::cout << "WrongCat copy assignment operator is called\n";
    if(this != &obj){
        this->_type = obj._type;
    }
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor is called\n";
}

void    WrongCat::makeSound(void) const{
    std::cout << "meooow\n";
}
