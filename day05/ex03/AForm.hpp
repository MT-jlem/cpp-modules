#ifndef AForm_HPP
#define AForm_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
    public:
        Form(const std::string &name, const int sGrade, const int eGrade);
        Form(const Form &obj);
        virtual ~Form();

        Form    &operator=(const Form &obj);

        class GradeTooHighException : public std::exception {
            const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            const char *what() const throw();
        };

        const std::string   &getName() const;
        int   getSingGrade();
        int   getExecuteGrade() const;
        bool    getSing() const;

        void    beSigned(Bureaucrat &bureaucrat);
        virtual void    execute(Bureaucrat const &executor) const = 0;
    private:
        const std::string _name;
        bool        _signed;
        const int   _signGrade;
        const int   _executeGrade;
};

std::ostream    &operator<<(std::ostream &stream, Form &obj);

#endif