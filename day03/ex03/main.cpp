#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main(){

    DiamondTrap one("TEST1");
    DiamondTrap two("TEST2");

    one.attack("TEST2");
    two.takeDamage(one.getAttackDamage());
    one.whoAmI();
    two.whoAmI();
}