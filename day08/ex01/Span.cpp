#include "Span.hpp"
#include <iostream>

Span::Span(unsigned int N){

    arr = new int[N];
    _size = N;
    _i = 0;
}


Span::Span(const Span &obj){
    arr = nullptr;
    *this = obj;
}


Span::~Span(){

    delete[] arr;
}


Span    &Span::operator=(const Span &obj){
    if (this != &obj){
        _size = obj._size;
        if(arr)
            delete[] arr;
        arr = new int[_size];
        for(unsigned int i = 0; i < _size; ++i)
            arr[i] = obj.arr[i];
    }
    return *this;
}

void    Span::addNumber(int num){

    if (_i >= _size)
        throw std::exception();
    arr[_i++] = num;
}

int     Span::shortestSpan(){
    int res = INT32_MAX;

    std::sort(arr, arr + _size);
    for(unsigned int i = 0; i <= _i; ++i){
        if (i+1 <= _i){
            int sub = arr[i+1]-arr[i];
            if (sub < res)
                res = sub;
        }
    }
    return res;
}

int     Span::longestSpan(){
    int res = 0;
    
    std::sort(arr, arr + _size);
    res = arr[_i - 1] - arr[0];
    return res;
}

void    Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last){
    if(std::distance(first, last) > (_size - _i))
        throw std::exception();
    while(first != last){
        arr[_i] = *first;
        _i++;
        first++;
    }
}
