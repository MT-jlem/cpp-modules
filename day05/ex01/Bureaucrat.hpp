#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat {
    public:
        Bureaucrat(const std::string &_name, int grade);
        Bureaucrat(Bureaucrat &obj);
        ~Bureaucrat();

        Bureaucrat  &operator=(Bureaucrat const &obj);

        class GradeTooHighException : public std::exception {
            const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            const char *what() const throw();
        };

        const std::string & getName();
        int getGrade();
        void    incrementGrade();
        void    decrementGrade();

        void    signForm(Form &form);
    private:
        const std::string   _name;
        int                 _grade;

};

std::ostream    &operator<<(std::ostream &stream, Bureaucrat &obj);

#endif