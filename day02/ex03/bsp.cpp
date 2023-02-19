#include "Point.hpp"
#include <iostream>

Fixed   area(Point const a, Point const b, Point const c){
    

    return ((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY())));
}

bool bsp( Point const a, Point const b, Point const c, Point const point){

    Fixed area1 = area(a, b, c);
    Fixed area2 = area(a,b,point);
    Fixed area3 = area(a,point,c);
    Fixed area4 = area(point, b, c);
    
    if(area1 == 0 || area2 == 0 || area4 == 0 || area3 == 0)
        return false;
    
    if (abs(area1.toFloat()) == (abs(area2.toFloat()) + abs(area3.toFloat()) + abs(area4.toFloat())))
        return true;
    
    return false;
   
   
}

// x0 (y1 - y2) + x1 (y2 - y0) + x2(y0-y1);