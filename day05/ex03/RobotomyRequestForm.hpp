#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <string>

class RobotomyRequestForm : public Form{
    
    public:
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(RobotomyRequestForm const &obj);
        ~RobotomyRequestForm();

        RobotomyRequestForm &operator=(RobotomyRequestForm const &obj);
        void    execute(Bureaucrat const & executor) const;
    private:
        std::string _target;
};

#endif