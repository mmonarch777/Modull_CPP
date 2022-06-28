#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

# include "Form.hpp"

class Form;

class Bureaucrat
{
private:

    std::string const name;
    int     grade;

public:

    Bureaucrat();
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(const Bureaucrat & other);
    Bureaucrat & operator=(const Bureaucrat & other);
    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(Form & other);

    class GradeTooHightException : public std::exception
    {
    public:

        GradeTooHightException();
        ~GradeTooHightException() throw();

        std::string message() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:

        GradeTooLowException();
        ~GradeTooLowException() throw();

        std::string message() const throw();
    };

};

std::ostream & operator<<(std::ostream & out, const Bureaucrat & other);

#endif