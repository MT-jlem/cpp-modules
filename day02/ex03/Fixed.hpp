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
    Fixed const    &operator=(const Fixed &obj);

    float   toFloat(void) const;
    int     toInt(void) const;
    int     getRawBits(void) const ;
    void    setRawBits(int const raw);

    bool    operator>(Fixed  &point);
    bool    operator<(Fixed  &point);
    bool    operator>=(Fixed  &point);
    bool    operator<=(Fixed  &point);
    bool    operator==(Fixed const &point);
    bool    operator!=(Fixed  &point);

    Fixed   &operator++();
    Fixed   operator++(int);
    Fixed   &operator--();
    Fixed   operator--(int);


    Fixed   operator+(Fixed const point1) const;
    Fixed   operator-(Fixed const point1) const;
    Fixed   operator*(Fixed const point1) const;
    Fixed   operator/(Fixed const point1) const;

    static Fixed    &min(Fixed  &point1, Fixed &point2);
    static const Fixed    &min(const Fixed  &point1, const Fixed &point2);
    static Fixed    &max(Fixed  &point1, Fixed &point2);
    static const Fixed    &max(const Fixed  &point1, const Fixed &point2);

private:

    int value;
    static const int frac = 8;
};
std::ostream    &operator<<(std::ostream &stream, Fixed &point);
std::ostream    &operator<<(std::ostream &stream, const Fixed &point);

#endif
