#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

#define N 4

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
        
    delete j;
    delete i;
    std::cout << std::endl;
    Animal *arr[N];
    
    for(int i = 0; i < N; ++i){
        if (i < N/2)
            arr[i] = new Dog;
        else
            arr[i] = new Cat;
    }
    std::cout << std::endl;
    for (int i = 0; i < N; ++i)
        delete arr[i];
    std::cout << std::endl;
    // Cat basic;
    // {
    //     Cat k(basic);

    // }
    return 0;
}
