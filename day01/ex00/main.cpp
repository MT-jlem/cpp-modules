#include "Zombie.hpp"

int main(){
    Zombie *ptr;

    ptr = newZombie("first");
    randomChump("second");
    ptr->announce();
    delete ptr;
}