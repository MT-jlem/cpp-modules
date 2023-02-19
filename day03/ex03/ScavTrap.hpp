#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

    public:
        ScavTrap();
        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap &obj);
        ScavTrap    &operator=(const ScavTrap &obj);
        ~ScavTrap();

        void    guardGate();
        void    attack(const std::string &target);
};

#endif