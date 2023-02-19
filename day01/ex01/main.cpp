#include "Zombie.hpp"

int main(){
    Zombie  *ptr;
    
    ptr = zombieHorde(10, "zombie");
    for(int i = 0;i < 10; ++i)
        ptr[i].announce();

    delete[] ptr;
    return 0;
}