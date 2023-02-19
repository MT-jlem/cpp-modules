#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string  &target)
    :Form("robotomy request",72,45){
        _target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
    :Form(obj){
        _target = obj._target;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj){
    if (this != &obj)
        _target = obj._target;
    return *this;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if (this->getSing())
    {
        if (executor.getGrade() > this->getExecuteGrade())
            throw   GradeTooLowException();
        if ((rand() % 100 + 1 )> 50)
            std::cout << _target << " has been robotomized\n";
        else
            std::cout << "the robotomy failed\n";
    }
    else
        std::cout << "The Form is not signed\n";
}
