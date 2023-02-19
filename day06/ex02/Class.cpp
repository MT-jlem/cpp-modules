#include "Class.hpp"
#include <exception>
#include <time.h>
#include <iostream>

Base *generate(){
    srand((unsigned int)time(NULL));
    switch (rand() % 3)
    {
    case 0:
        // std::cout << "A >>";
        return new A;
    case 1:
        // std::cout << "B >>";
        return new B;
    default:
        // std::cout << "C >>";
        return new C;
    }
}

void    identify(Base *p){

    if(dynamic_cast<A*>(p))
        std::cout << "p : A\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "p : B\n";
    else if(dynamic_cast<C*>(p))
        std::cout << "p : C\n";
    else
        std::cout << "Unknown\n";
}

void    identify(Base &p){

    // std::cout << "ref\n";
    try {
        A ptr1 = dynamic_cast<A&>(p);
        std::cout << "p : A\n";
        }
    catch (std::exception &e){
        try {
            B ptr2 = dynamic_cast<B&>(p);
            std::cout << "p : B\n";
        }
        catch (std::exception &e){
            try {
                C  prt3 = dynamic_cast<C&>(p);
                std::cout << "p : C\n";
            }
            catch(std::exception &e){
                std::cout << "Unknown\n";
            }
        }
    }
}
