#include "Conversion.hpp"
#include <exception>
#include <iomanip>

Conversion::Conversion(std::string const &str){
    _str = str;
}

Conversion::Conversion(Conversion const &obj){
    _str = obj._str;
}

Conversion::~Conversion(){

}

Conversion  &Conversion::operator=(Conversion const &obj){
    if(this != &obj){
        _str = obj._str;
    }
    return *this;
}

void    Conversion::convertInt(){
    int i;
    
    try {i = stoi(_str);}
    catch (std::exception &e){failedConv();}
    
    std::cout << "char: ";
    if(isprint(i))
        std::cout << '\'' << static_cast<char>(i) << '\'' << '\n';
    else
        std::cout << "Non displayable\n";
    std::cout << "int: " << i << '\n';
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(i) << 'f' << '\n';
    std::cout << "double: " << static_cast<double>(i) << '\n';
}

void    Conversion::convertChar(){
    char c = _str[0];
    
    std::cout << "char: ";
    if(isprint(c))
        std::cout << '\'' << c << '\'' << '\n';
    else
        std::cout << "Non displayable\n";
    std::cout << "int: " << static_cast<int>(c)<< '\n';
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(c) << 'f' << '\n';
    std::cout << "double: " << static_cast<double>(c) << '\n';
    
}

void    Conversion::convertFloat(){
    float f;
    try {f = stof(_str);}
    catch (std::exception &e){failedConv();}
    
    std::cout << "char: ";
    if(isprint(static_cast<int>(f)))
        std::cout << '\'' << static_cast<char>(f) << '\'' << '\n';
    else
        std::cout << "Non displayable\n";
    std::cout << "int: " << static_cast<int>(f) << '\n';
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << f << 'f' << '\n';
    std::cout << "double: " << static_cast<double>(f) << '\n';
}

void    Conversion::convertDouble(){
    double d;

    try {d = stod(_str);}
    catch (std::exception &e){failedConv();}
    
    std::cout << "char: ";
    if(isprint(static_cast<int>(d)))
        std::cout << '\'' << static_cast<char>(d) << '\'' << '\n';
    else
        std::cout << "Non displayable\n";
    std::cout << "int: " << static_cast<int>(d) << '\n';
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(d) << 'f' << '\n';
    std::cout << "double: " << d << '\n';
}

void    Conversion::convertFloatInf(){
    std::cout << "char: impossible\n";
    std::cout << "int: impossible\n";
    std::cout << "float: " << _str << "\n";
    std::cout << "double: " << _str.substr(0, _str.length()-1) << "\n";
}

void    Conversion::convertDoubleInf(){
    std::cout << "char: impossible\n";
    std::cout << "int: impossible\n";
    std::cout << "float: " << _str << "f\n";
    std::cout << "double: " << _str << "\n";
}

void    Conversion::failedConv(){
    std::cout << "char: impossible\n";
    std::cout << "int: impossible\n";
    std::cout << "float: impossible\n";
    std::cout << "double: impossible\n";
}