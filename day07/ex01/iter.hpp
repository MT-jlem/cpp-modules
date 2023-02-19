#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    iter(T *p, int size, void (*func)(T&)){
    for(int i = 0; i < size; ++i){
        func(p[i]);
    }
}

template <typename T>
void    func(T& a){
    std::cout << a << "\n";
}

#endif