#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){

    try{
        Bureaucrat four("four", 2);
        ShrubberyCreationForm   test("target1");
        RobotomyRequestForm     test2("target2");
        PresidentialPardonForm  test3("target3");

        test3.beSigned(four);
        four.signForm(test3);
        four.executeForm(test3);
    }
    catch (std::exception &e){
        std::cout << e.what() << "\n";
    }
}