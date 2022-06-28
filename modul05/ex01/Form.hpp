#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>

class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
private:

    const std::string   name;
    const int           sign_grade;
    const int           execute_grade;
    bool                it_signed;

public:

    Form();
    Form(const std::string name, int sign, int execute);
    Form(const Form & other);
    ~Form();

    Form & operator=(const Form & other);

    std::string getName() const;
    int getSignGrade() const;
    int getExecuteGrade() const;
    bool getItSigned() const;
    void beSigned(Bureaucrat & other);


    class GradeTooHighException : public std::exception
    {
    public:
        std::string target;

        GradeTooHighException(std::string target);
        ~GradeTooHighException() throw();

        std::string massage_sign() const throw();
        std::string massage_execute() const throw();
        std::string massage_default() const throw();

    };

    class GradeTooLowException : public std::exception
    {
    public:
        std::string target;

        GradeTooLowException(std::string target);
        ~GradeTooLowException() throw();

        std::string massage_sign() const throw();
        std::string massage_execute() const throw();
        std::string massage_default() const throw();

    };
};

std::ostream & operator<<(std::ostream & out, const Form & other);

#endif