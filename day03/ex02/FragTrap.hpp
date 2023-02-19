#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const std::string &name);
        FragTrap(const FragTrap &obj);
        FragTrap    &operator=(const FragTrap &obj);
        ~FragTrap();

        void    highFiveGuys(void);
};



#endif