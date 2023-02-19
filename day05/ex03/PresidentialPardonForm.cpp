#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
    :Form("presidential pardon",25,5){
        _target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj)
    :Form(obj){
        _target = obj._target;
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj){
    if (this != &obj)
        _target = obj._target;
    return *this;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if (this->getSing())
    {
        if (executor.getGrade() > this->getExecuteGrade())
            throw   GradeTooLowException();
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
    }
    else
        std::cout << "The Form is not signed\n";
}
