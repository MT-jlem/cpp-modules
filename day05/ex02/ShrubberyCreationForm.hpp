#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>
#include <string>

class ShrubberyCreationForm : public Form{

    public:
        
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(ShrubberyCreationForm const &obj);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);
        void    execute(Bureaucrat const & executor) const;
    private:
        std::string _target;
};

#endif