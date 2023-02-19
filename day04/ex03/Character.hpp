#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
    public:
        Character(std::string const &name);
        Character(const Character &obj);
        ~Character();
        Character   &operator=(const Character &obj);

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
    private:
        std::string const _Name;
        AMateria    *_slot[4];
        int         _i;
        AMateria    **leftovers;
        int         _j;
        int         size;
};

#endif