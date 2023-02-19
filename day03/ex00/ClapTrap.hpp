#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap &obj);
        ~ClapTrap();
        ClapTrap    &operator=(ClapTrap &obj);

        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        unsigned int    getAttackDamage();
        //more getters and setters should be added but i'm lazy to do that(+not required in subject);
    private:
        std::string _Name;
        int         _HitPoint;
        int         _EnergyPoint;
        int         _AttackDamage;
};

#endif