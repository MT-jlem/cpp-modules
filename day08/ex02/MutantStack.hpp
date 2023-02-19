#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <typename T, typename _Container = std::deque<T> >
class MutantStack : public std::stack<T, _Container> {
    public:
        MutantStack(){}
        ~MutantStack(){}
        MutantStack(const MutantStack &obj){
            *this = obj;
        }
        MutantStack &operator=(const MutantStack &obj){
            if (this != &obj)
                this->c = obj.c;
        }
        typedef typename _Container::iterator iterator;
        typedef typename _Container::const_iterator const_iterator ;
        
        iterator    begin(){
            return this->c.begin();
        }

        iterator    end(){
            return this->c.end();
        }


};

#endif