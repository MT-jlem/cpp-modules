#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP


#include "AForm.hpp"
#include <string>

class PresidentialPardonForm : public Form{
    
    public:
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &obj);
        ~PresidentialPardonForm();

        PresidentialPardonForm &operator=(PresidentialPardonForm const &obj);
        void    execute(Bureaucrat const & executor) const;
    private:
        std::string _target;
};

#endif