#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(): value(0){
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed &num){

    std::cout << "Copy constructor called\n";
    *this = num;
}

Fixed::Fixed(const Fixed &num){

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

    return value;
}

void    Fixed::setRawBits(int const raw){

    std::cout << "setRawBits member function called\n";
    this->value = raw;
}

Fixed::Fixed(const int num){

    std::cout << "Int constructor called\n";
    value = num * (1 << frac);
}

Fixed::Fixed(const float num){

    std::cout << "Float constructor is called\n";
    value = roundf((num * (float)(1 << frac)));
}

float   Fixed::toFloat() const{

    return (float)((float)value / (float)(1 << frac));
}

int     Fixed::toInt() const{

    return value / (1 << frac);
}

std::ostream    &operator<<(std::ostream &stream, Fixed  &point){

    stream << point.toFloat();
    return stream;
}

std::ostream    &operator<<(std::ostream &stream, const Fixed  &point){

    stream << point.toFloat();
    return stream;
}