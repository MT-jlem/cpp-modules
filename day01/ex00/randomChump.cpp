#include "Zombie.hpp"

void   randomChump( std::string name){
    Zombie tmp;

    tmp.getName(name);
    tmp.announce();
}