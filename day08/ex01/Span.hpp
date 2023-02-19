#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <algorithm>
#include <iterator>
#include <vector>

class Span {
    public:
        Span(unsigned int N);
        Span(const Span &obj);
        ~Span();
        Span    &operator=(const Span &obj);

        void    addNumber(int num);
        void    addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
        int     shortestSpan();
        int     longestSpan();

    private:
        int             *arr;
        unsigned int    _size;
        unsigned int    _i;
};

#endif