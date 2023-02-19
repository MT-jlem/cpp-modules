#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap , public FragTrap{

    public:
        DiamondTrap();
        DiamondTrap(const std::string &name);
        DiamondTrap(const DiamondTrap &obj);
        DiamondTrap &operator=(const DiamondTrap &obj);
        ~DiamondTrap();

        void    whoAmI();
        
    private:
        std::string _Name;
};

#endif