#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <string>
#include <iostream>

class   Conversion {
    public:
        Conversion(std::string const &str);
        Conversion(Conversion const &obj);
        ~Conversion();
        Conversion  &operator=(Conversion const &obj);
        
        void    convertInt();
        void    convertChar();
        void    convertFloat();
        void    convertDouble();
        void    convertFloatInf();
        void    convertDoubleInf();
        void    failedConv();

    private:
        std::string _str;
};

#endif