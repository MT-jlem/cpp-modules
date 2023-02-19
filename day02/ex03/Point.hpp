#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    public:
    
        Point();
        Point(Point const &copy);
        Point(const float x, const float y);
        ~Point();
        Point const   &operator=(const Point &point);

        Fixed const   &getX() const;
        Fixed const   &getY() const;

    private:
        Fixed const _x;
        Fixed const _y;
        
};



#endif