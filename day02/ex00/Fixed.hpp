#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{

public:

    Fixed();
    Fixed(Fixed &num);
    ~Fixed();
    Fixed   &operator=(const Fixed &obj);

    int     getRawBits(void) const ;
    void    setRawBits(int const raw);
    
private:

    int value;
    static const int frac = 8;
};

#endif