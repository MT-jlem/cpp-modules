#include "Brain.hpp"
#include <iostream>

Brain::Brain(){
    std::cout << "Brain constructor is called\n";
    for (int i = 0; i < 100; ++i)
        ideas[i] = "some idea";
}

Brain::Brain(Brain const &obj){
    std::cout << "Brain copy constructor is called\n";
    for(int i = 0; i < 100; ++i)
        this->ideas[i] = obj.ideas[i];
}

Brain::~Brain(){
    std::cout << "Brain destructor is called\n";
}

Brain   &Brain::operator=(const Brain &obj){
    std::cout << "Brain copy assignment operator is called\n";
    if (this != &obj){
        for(int i = 0; i < 100; ++i)
            this->ideas[i] = obj.ideas[i];
    }
    return *this;
}