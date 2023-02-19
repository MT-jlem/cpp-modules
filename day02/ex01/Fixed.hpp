#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>
class Fixed
{

public:

    Fixed();
    Fixed(Fixed &num);
    Fixed(const Fixed &num);
    Fixed(const int num);
    Fixed(const float num);
    ~Fixed();
    Fixed   &operator=(const Fixed &obj);

    float   toFloat(void) const;
    int     toInt(void) const;
    int     getRawBits(void) const ;
    void    setRawBits(int const raw);
    
private:

    int value;
    static const int frac = 8;
};
std::ostream    &operator<<(std::ostream &stream, Fixed &point);
std::ostream    &operator<<(std::ostream &stream, const Fixed &point);

#endif
