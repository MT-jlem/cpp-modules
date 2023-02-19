#include "AForm.hpp"

Form::Form(const std::string &name, const int sGrade, const int eGrade)
    :_name(name), _signGrade(sGrade), _executeGrade(eGrade){
        _signed = false;
    if(_signGrade < 1 || _executeGrade < 1)
        throw GradeTooHighException();
    else if (_signGrade > 150 || _executeGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &obj)
    : _name(obj._name), _signGrade(obj._signGrade), _executeGrade(obj._executeGrade){
        _signed = obj._signed;
}

Form::~Form(){
    //Hi
}

Form    &Form::operator=(const Form &obj){
    if(this != &obj){
        _signed = obj._signed;
    }
    return *this;
}

const char *Form::GradeTooHighException::what() const throw(){
    return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw(){
    return "Grade too low";
}

const std::string   &Form::getName() const{
    return _name;
}
int   Form::getSingGrade(){
    return _signGrade;
}
int   Form::getExecuteGrade() const{
    return _executeGrade;
}
bool    Form::getSing() const{
    return _signed;
}

std::ostream    &operator<<(std::ostream &stream, Form &obj){
    stream << obj.getName() << " Form , required grade to sign is " << obj.getSingGrade();
    stream << ", and required grade to execute is " << obj.getExecuteGrade();
    stream << " and the Form is " <<((obj.getSing()) ? "signed\n" : "not signed\n");
    return stream;
}

void    Form::beSigned(Bureaucrat &bureaucrat){
    if (_signGrade < bureaucrat.getGrade())
        throw   GradeTooLowException();
    _signed = true;
}
