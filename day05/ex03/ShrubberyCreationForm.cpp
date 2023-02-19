#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    :Form("shrubbery creation",145,137){
        _target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj)
    :Form(obj){
        _target = obj._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj){
    if (this != &obj)
        _target = obj._target;
    return *this;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if (getSing())
    {
        if (executor.getGrade() > this->getExecuteGrade())
            throw   GradeTooLowException();
        std::ofstream tree;
        tree.open(_target + "_shrubbery");
        tree << "\n";
        tree <<"       _-_\n";
        tree << "    /~~   ~~\\\n";
        tree << " /~~         ~~\\\n";
        tree << "{               }\n";
        tree << " \\  _-     -_  /\n";
        tree << "   ~  \\\\ //  ~\n";
        tree << "_- -   | | _- _\n";
        tree << "  _ -  | |   -_\n";
        tree << "      // \\\\\n";
    }
    else
        std::cout << "The Form is not signed\n";
}
