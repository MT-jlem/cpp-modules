#include "Bureaucrat.hpp"
#include <iostream>

int main(){

    try{
        // Bureaucrat one("one", -1);
        // Bureaucrat two("two", 160);
        // Bureaucrat three("three", 1);
        Bureaucrat four("four", 150);

        // three.incrementGrade();
        std::cout << four;
        four.decrementGrade();
    }
    catch (std::exception &e){
        std::cout << e.what() << "\n";
    }
}