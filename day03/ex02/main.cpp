#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(){

    FragTrap one("TEST");
    FragTrap two;
    two = one;

    one.attack("WALO");
    two.highFiveGuys();
}