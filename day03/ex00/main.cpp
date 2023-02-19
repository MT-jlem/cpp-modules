#include "ClapTrap.hpp"
#include <iostream>

int main(){

    ClapTrap    entity1("TEST1");
    ClapTrap    entity2("TEST2");

    entity1.attack("test2");
    entity2.takeDamage(entity1.getAttackDamage());
    entity2.beRepaired(10);
    entity2.attack("test1");
    entity1.takeDamage(entity2.getAttackDamage());
}