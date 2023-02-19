#include "Conversion.hpp"
#include <iostream>

int main(int ac, char *av[]){
    int i = 0;
    bool    fFloat = false;
    bool    fDouble = false;
    std::string str;

    if(ac == 2){
        str = av[1];
        Conversion  conv(str);
        if(str == "-inff" || str == "+inff" || str == "nanf"){
            conv.convertFloatInf();
            return 0;
        }
        else if (str == "-inf" || str == "+inf" || str == "nan"){
            conv.convertDoubleInf();
            return 0;
        }
        if (str[0] >= '0' && str[i] <= '9'){
            for(int i = 0; str[i] ;++i){
                if(str[i] == '.')
                    fDouble = true;
                if(str[i] == 'f'){
                    fFloat = true; fDouble = false; }
            }
            if (fFloat)
                conv.convertFloat();
            else if (fDouble)
                conv.convertDouble();
            else
                conv.convertInt();
        }
        else{
            if(str.length() > 1){
                conv.failedConv();
                return 1;
            }
            conv.convertChar();
        }
    }
    else
        std::cout << "Invalid number of arg";
}