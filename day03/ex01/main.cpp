#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(){

    ScavTrap one("TEST");
    ScavTrap two;
    two = one;

    one.attack("WALO");
    one.guardGate();
}