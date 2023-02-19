#include "Point.hpp"
#include "Fixed.hpp"


Point::Point(): _x(0), _y(0){}

Point::Point(const float x, const float y): _x(x), _y(y){}

Point::Point(Point const  &copy): _x(copy._x), _y(copy._y){
    
}

Point::~Point(){}

Point const   &Point::operator=(const Point &point){
    if (this == &point) return *this;
    return  *this;
}

Fixed const   &Point::getX() const{
    return _x;
}

Fixed const   &Point::getY() const{
    return _y;
}