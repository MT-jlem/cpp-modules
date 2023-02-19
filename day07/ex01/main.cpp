#include "iter.hpp"
#include <iostream>
#include <string>

int main(){
    // char a[4] = {'A', 'B', 'C', 'D'};
    // int a[4] = {1, 2, 3, 4};
    std::string a[4] = {"hhh", "iiii", "llll", "kkkk"};
    
    iter(a, 4, func);
}