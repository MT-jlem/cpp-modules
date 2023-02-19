#include "Harl.hpp"
#include <iostream>

void    Harl::debug(){

    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\n";
    std::cout << "I really do!\n";
}

void    Harl::info(){

    std::cout << "I cannot believe adding extra bacon costs more money.\n";
    std::cout << "You did\'t put enough bacon in my burger! If you did, I wouldn\'t be asking for more!\n";
}

void    Harl::warning(){

    std::cout << "I think I deserve to have some extra bacon for free.\n";
    std::cout << "I\'ve been coming for years whereas you started working here since last month.\n";
}

void    Harl::error(){

    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void    Harl::complain(std::string level){

    void (Harl::*ptr[4])(void) ={ &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string action[4] = {"DEBUG", "INFO" , "WARNING", "ERROR"};
    for (int i= 0; i < 4; ++i){
        if (action[i] == level)
            (this->*ptr[i])();
    }
    
}
