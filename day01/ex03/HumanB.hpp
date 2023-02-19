#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
    public :
        Weapon  *weapon;
        std::string name;

        HumanB(std::string name);
        HumanB(std::string name, Weapon weapon);
        ~HumanB();

        void    attack();
        void    setWeapon(Weapon &weapon);
};

#endif