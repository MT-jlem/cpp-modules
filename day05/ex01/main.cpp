#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(){

    try{
        // Bureaucrat one("one", -1);
        // Bureaucrat two("two", 160);
        // Bureaucrat three("three", 1);
        Bureaucrat four("four", 2);
        Form    form("bac", 13, 37);
        // Form    form("bac", 200, 37);
        // Form    form("bac", 13, -100);

        form.beSigned(four);
        four.signForm(form);
        std::cout << four;
        std::cout << form;
        // three.incrementGrade();
        // four.decrementGrade();
    }
    catch (std::exception &e){
        std::cout << e.what() << "\n";
    }
}