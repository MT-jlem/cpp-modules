#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
    Point a(5, 5);
    Point b(5, 10);
    Point c(10, 5);
    // Point p(5, 5);
    Point p(13, 42);
    // Point p(6, 6);

    if (bsp(a, b, c, p))
        std::cout << "the point is inside the triangle\n";
    else
        std::cout << "the point is outside the triangle\n";
    return 0;
}
