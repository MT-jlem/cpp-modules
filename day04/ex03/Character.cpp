#include "Character.hpp"
#include <iostream>

Character::Character(std::string const &name):_Name(name){
    size = 10;
    for(int i = 0; i < 4; ++i)
        _slot[i] =  nullptr;
    _i = 0;
    _j = -1;
    leftovers = new AMateria*[size];
}

Character::Character(const Character &obj){
    *this = obj;
}

Character::~Character(){
    for(int i = 0; i <= _i; ++i){
        delete _slot[i];
    }
    for(int i = 0; i <= _j; ++i){
        delete leftovers[i];     
    }
    delete[] leftovers;
}

Character   &Character::operator=(const Character &obj){
    if (this != &obj){
        for(int i = 0; i <= _i; ++i)
            delete _slot[i];
        _i = obj._i;
        for(int i = 0; i <= _i; ++i)
            _slot[i] = obj._slot[i]->clone();
    }
    return *this;
}


std::string const & Character::getName() const{
    return _Name;
}

void Character::equip(AMateria* m){
    if(_i < 4){
        for(int i = 0; i < 4; ++i){
            if(!_slot[i]){
                _slot[_i++] = m;
                break;
            }
        }
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

void Character::unequip(int idx){
    if(idx < 4){
        leftovers[++_j] =  _slot[idx];
        _slot[idx] = nullptr;
        _i--;
    } 
}

void Character::use(int idx, ICharacter& target){
    if(_slot[idx])
        _slot[idx]->use(target);
}
