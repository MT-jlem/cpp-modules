#include "Zombie.hpp"

Zombie* newZombie(std::string name){

    Zombie *ptr = new Zombie;
    ptr->getName(name);
    return ptr;
}