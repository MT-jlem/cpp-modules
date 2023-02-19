#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){

    try{
   
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        delete rrf;
    }
    catch (std::exception &e){
        std::cout << e.what() << "\n";
    }
}