#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(): value(0){
}

Fixed::Fixed(Fixed &num){
    *this = num;
}

Fixed::Fixed(const Fixed &num){

    *this = num;
}

Fixed::~Fixed(){

}

Fixed   &Fixed::operator=(const Fixed &obj){

    this->value = obj.getRawBits();
    return  *this;
}

int Fixed::getRawBits() const{

    return value;
}

void    Fixed::setRawBits(int const raw){

    this->value = raw;
}

Fixed::Fixed(const int num){
    value = num * (1 << frac);
}

Fixed::Fixed(const float num){

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

bool    Fixed::operator>(Fixed &point){
    
    return value > point.value ? true : false;
}

bool    Fixed::operator<(Fixed &point){

   return value < point.value ? true : false;
}

bool    Fixed::operator>=(Fixed &point){

    return value >= point.value ? true : false;
}

bool    Fixed::operator<=(Fixed &point){

    return value <= point.value ? true : false;
}

bool    Fixed::operator==(Fixed &point){

    return value == point.value ? true : false;
}

bool    Fixed::operator!=(Fixed &point){

    return value != point.value ? true : false;
}

Fixed   Fixed::operator+(Fixed  point1){
    Fixed tmp(point1.toFloat() + toFloat());
    return tmp;
}

Fixed   Fixed::operator-(Fixed  point1){

    Fixed tmp(point1.toFloat() - toFloat());
    return tmp;
}

Fixed   Fixed::operator*(Fixed  point1){

    Fixed tmp(point1.toFloat() * toFloat());
    return tmp;
}

Fixed   Fixed::operator/(Fixed point1){
   
    Fixed tmp(point1.toFloat() / toFloat());
    return tmp;
}

Fixed    &Fixed::min(Fixed  &point1, Fixed &point2){

    return point1.value < point2.value ? point1 : point2;
}

const Fixed    &Fixed::min(const Fixed  &point1, const Fixed &point2){

    return ((point1.value < point2.value) ? point1 : point2);
}


Fixed    &Fixed::max(Fixed  &point1, Fixed &point2){

    return point1.value > point2.value ? point1 : point2;
}


const Fixed    &Fixed::max(const Fixed  &point1, const Fixed &point2){

    return point1.value > point2.value ? point1 : point2;
}

Fixed   &Fixed::operator++(){

    ++value;
    return *this;
}

Fixed   Fixed::operator++(int){

    Fixed tmp(this->toFloat());
    value++;
    return tmp;
}

Fixed   &Fixed::operator--(){

    --value;
    return *this;
}
Fixed   Fixed::operator--(int){

    Fixed tmp(value);
    value--;
    return tmp;
}
