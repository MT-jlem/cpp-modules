#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << "Zombie is created\n";
}

Zombie::~Zombie(){
    std::cout << "Zombie is destroyed\n";
}

void    Zombie::announce( void ){

    std::cout << name << ":  BraiiiiiiinnnzzzZ...\n";
}

 void    Zombie::getName(std::string zombieName)
 {
    name = zombieName;
 }

