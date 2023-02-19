#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name){
    if(grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &obj): _name(obj._name){
    *this = obj;
}

Bureaucrat::~Bureaucrat(){
    //goodbye
}


Bureaucrat  &Bureaucrat::operator=(Bureaucrat const &obj){
    if(this != &obj){
        _grade = obj._grade;
    }
    return  *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade too low";
}


const std::string &Bureaucrat::getName(){
    return _name;
}

int Bureaucrat::getGrade(){
    return _grade;
}

void    Bureaucrat::incrementGrade(){
    if (_grade > 1)
        --_grade;
    else
        throw GradeTooHighException();
}

void    Bureaucrat::decrementGrade(){
    if (_grade < 150)
        ++_grade;
    else
        throw GradeTooLowException();
}

std::ostream    &operator<<(std::ostream &stream, Bureaucrat &obj){
    stream << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "\n";
    return stream;
}
