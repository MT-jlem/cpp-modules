#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <string>

class Intern {
    public:
        Intern();
        Intern(const Intern &obj);
        ~Intern();
        Intern  &operator=(const Intern &obj);

        Form    *makeForm(const std::string &formName, const std::string &target);
};

#endif