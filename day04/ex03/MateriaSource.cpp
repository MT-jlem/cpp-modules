#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(){
    size = 10;
    for(int i = 0; i < 4; ++i){
        slot[i] = nullptr;
    }
    _i = 0;
    _j = -1;
    leftovers = new AMateria*[size];
}

MateriaSource::MateriaSource(const MateriaSource &obj){
    *this = obj;
}

MateriaSource::~MateriaSource(){
    for(int i = 0; i <= _i; ++i)
        delete slot[i];
    for(int i = 0; i <= _j; ++i){
        delete leftovers[i];     
    }
    delete[] leftovers;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj){
    if (this != &obj){
        for(int i = 0; i <= _i; ++i)
            delete slot[i];
        _i = obj._i;
        for(int i = 0; i <= _i; ++i)
            slot[i] = obj.slot[i]->clone();
    }
    return *this;
}


void    MateriaSource::learnMateria(AMateria *m){
    if (_i < 4){
        slot[_i++] = m;
    }
    else{
        if (_j < size){
            leftovers[++_j] = m;
        }
        else{
            size *= 2;
            AMateria **tmp = new AMateria*[size];
            for(int i = 0; i <= _j; ++i){
                tmp[i] = leftovers[i];
            }
            delete[] leftovers;
            tmp[++_j] = m;
            leftovers = tmp;
        }
    }
}

AMateria    *MateriaSource::createMateria(std::string const &type){
    for(int i = 0; i < _i; ++i){
        if (type == slot[i]->getType())
            return slot[i]->clone();
    }
    return 0;
}
