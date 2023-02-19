#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(): value(0){
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed &num){

    std::cout << "Copy constructor called\n";
    *this = num;
}

Fixed::~Fixed(){

    std::cout << "Destructor called\n";
}

Fixed   &Fixed::operator=(const Fixed &obj){

    std::cout << "Copy assignment operator called\n";
    this->value = obj.getRawBits();
    return  *this;
}

int Fixed::getRawBits() const{

    std::cout << "getRawBits member function called\n";
    return value;
}

void    Fixed::setRawBits(int const raw){

    this->value = raw;
}
