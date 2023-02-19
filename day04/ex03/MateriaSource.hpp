#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {

    public :
        MateriaSource();
        MateriaSource(const MateriaSource &obj);
        ~MateriaSource();
        MateriaSource &operator=(const MateriaSource &obj);

        void    learnMateria(AMateria *m);
        AMateria    *createMateria(std::string const &type);
    private:
        AMateria    *slot[4];
        int         _i;
        AMateria    **leftovers;
        int         _j;
        int         size;
};

#endif