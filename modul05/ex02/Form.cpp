#include "Form.hpp"

Form::Form(): name("default"), sign_grade(1), execute_grade(1), it_signed(false)
{
    std::cout << "Form default constructor." << std::endl;
}
Form::Form(const std::string name, int sign, int execute): name(name), sign_grade(sign), execute_grade(execute)
{
    std::cout << "Form constructor with params." << std::endl;
    if (sign_grade < 1 || execute_grade < 1)
        throw GradeTooHighException("default");
    else if (sign_grade > 150 || execute_grade > 150)
        throw GradeTooLowException("default");
    it_signed = false;
}
Form::Form(const Form & other): name(other.name), sign_grade(other.sign_grade), execute_grade(other.execute_grade)
{
    it_signed = other.it_signed;
    std::cout << "Form copy constructor." << std::endl;
}
Form::~Form()
{
    std::cout << "Form destructor."  << std::endl;
}
Form & Form::operator=(const Form & other)
{
    if (this != &other)
    {
        it_signed = other.it_signed,
                std::cout << "Name and Grade is const. Can't copy." << std::endl;
        std::cout << "Form assignment operator." << std::endl;
    }
    else
        std::cout << "Form self-assignment." << std::endl;
    return *this;
}
std::string Form::getName() const
{
    return name;
}
int Form::getSignGrade() const
{
    return (sign_grade);
}
int Form::getExecuteGrade() const
{
    return (execute_grade);
}
bool Form::getItSigned() const
{
    return (it_signed);
}
void Form::beSigned(Bureaucrat & other)
{
    if (this->getItSigned() == true)
    {
        std::cout << "Form is already signed.";
        return;
    }
    if (other.getGrade() <= sign_grade)
    {
        it_signed = true;
        std::cout << other.getName() << " singed Form " << this->getName() << std::endl;
    }
    else
        throw GradeTooLowException("sign");
}

Form::GradeTooLowException::GradeTooLowException(std::string target): target(target) {};
Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooHighException::GradeTooHighException(std::string target): target(target){}
Form::GradeTooHighException::~GradeTooHighException() throw() {}

std::string Form::GradeTooHighException::massage_sign() const throw()
{
    return ("Don't signed. Bureaucrat grade very hight.");
}
std::string Form::GradeTooHighException::massage_execute() const throw()
{
    return ("Don't execute. Bureaucrat grade very hight.");
}
std::string Form::GradeTooHighException::massage_default() const throw()
{
    return ("'Grade execute' or 'Grade signed' very higt.");
}

std::string Form::GradeTooLowException::massage_sign() const throw()
{
    return ("Don't signed. Bureaucrat grade very low.");
}
std::string Form::GradeTooLowException::massage_execute() const throw()
{
    return ("Don't execute. Bureaucrat grade very low.");
}
std::string Form::GradeTooLowException::massage_default() const throw()
{
    return ("'Grade execute' or 'Grade signed' very low.");
}
std::ostream & operator<<(std::ostream & out, const Form & other)
{
    out << "Form name       : " << other.getName() << std::endl
        << "Grade to sign   : " << other.getSignGrade() << std::endl
        << "Grade to execute: " << other.getExecuteGrade() << std::endl
        << "Signed          : " << std::boolalpha << other.getItSigned() << std::endl;
    return out;
}
