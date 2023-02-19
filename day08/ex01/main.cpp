#include "Span.hpp"
#include <iostream>

int main()
{
    Span sp = Span(5);
    // std::vector<int> vec(5);
    // for (int i = 1; i <= 5; ++i)
    //     vec[i] = i;

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    // sp.addNumber(vec.begin(), vec.end());


    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    return 0;
}