#include "Harl.hpp"
#include <iostream>

int setLevel(char *av){
    
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; ++i){
        if (str[i] == av)
           return i;
    }
    return -1;
}

int main(int ac, char **av){

    if (ac == 2)
    {
        Harl harl;
        int level = setLevel(av[1]);
        switch (level)
        {
        case 0:
            std::cout << "[ DEBUG ]\n";
            harl.complain("DEBUG");
        case 1:
            std::cout << "[ INFO ]\n";
            harl.complain("INFO");
        case 2:
            std::cout << "[ WARNING ]\n";
            harl.complain("WARNING");
        case 3:
            std::cout << "[ ERROR ]\n";
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            break;
        }
    }
    else
        std::cout << "invalid number of arguments\n";

}