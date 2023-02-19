#include "Intern.hpp"


Intern::Intern(){}

Intern::Intern(const Intern &obj){
    *this = obj;
}

Intern::~Intern(){}

Intern  &Intern::operator=(const Intern &obj){
    if(this != &obj) return *this;
    return *this;
}

Form   *Intern::makeForm(const std::string &formName, const std::string &target){

    std::string names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    int form = -1;

    for (int i = 0; i < 3; ++i){
        if(names[i] == formName){
            form  = i;
            break;
        }
    }
    switch (form)
    {
    case 0:
        std::cout << "Intern creates " << formName << '\n';
        return new ShrubberyCreationForm(target);
        break;
    case 1:
        std::cout << "Intern creates " << formName << '\n';
        return new RobotomyRequestForm(target);
        break;
    case 2:
        std::cout << "Intern creates " << formName << '\n';
        return new PresidentialPardonForm(target);
        break;
    default:
        std::cout << "form not found\n";
        break;
    }
    return nullptr;
}
