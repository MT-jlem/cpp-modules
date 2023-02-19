#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
int easyfind(T arr, int n){
    
    if(std::find(arr.begin(), arr.end(), n) != arr.end())
        return 0;
    else
        return -1;
}


#endif