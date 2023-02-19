#include "easyfind.hpp"
#include <vector>
#include <set>
#include <array>
#include <iostream>

int main(){
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    // std::vector<int> vec(5);
    // for (int i = 0; i < 5; ++i)
    //     vec[i] = i;


    if(easyfind(arr, 25))
        std::cout << "number is not found\n";
    else
        std::cout << "number is found\n";
}
