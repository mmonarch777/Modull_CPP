#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default"), grade(100)
{
    std::cout << "Bureaucrat default constructor." << std::endl;
}
Bureaucrat::Bureaucrat(std::string const name, int grade): name(name)
{
    std::cout << "Bureaucrat constructor with params" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHightException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat & other)
{
    std::cout << "Bureaucrat copy constructor." << std::endl;
    *this = other;
}
Bureaucrat & Bureaucrat::operator=(const Bureaucrat & other)
{
    if (this != &other)
    {
        std::cout << "Bureaucrat assignment operator." << std::endl;
        grade = other.grade;
        std::cout << "Can't change name because NAME IS CONST.";
    }
    else
        std::cout << "Bureaucrat self-assignment" << std::endl;
    return *this;
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor." << std::endl;
}
std::string Bureaucrat::getName() const
{
    return name;
}
int Bureaucrat::getGrade() const
{
    return grade;
}
void Bureaucrat::incrementGrade()
{
    if (grade - 1 < 1)
    {
        throw Bureaucrat::GradeTooHightException();
    }
    grade--;
    std::cout << "Bureucrat grade increased." << std::endl;
}
void Bureaucrat::decrementGrade()
{
    if (grade + 1 > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    grade++;
    std::cout << "Bureucrat grade downgraded." << std::endl;
}

Bureaucrat::GradeTooHightException::GradeTooHightException() {}
Bureaucrat::GradeTooHightException::~GradeTooHightException() throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

std::string Bureaucrat::GradeTooHightException::message() const throw()
{
    return ("The grade Bureaucrat is too hight.");
}
std::string Bureaucrat::GradeTooLowException::message() const throw()
{
    return ("The grade Bureaucrat is too low.");
}

std::ostream & operator<<(std::ostream & out, const Bureaucrat & other)
{
    out << other.getName() << ", bureaucrat grade " << std::to_string(other.getGrade()) << std::endl;
    return out;
}

void Bureaucrat::signForm(Form & other)
{
    if (other.getItSigned() == true)
    {
        std::cout << name << " couldn't sign " << other.getName()
                  << " because this Form is already signed." << std::endl;
        return;
    }
    try
    {
        other.beSigned(*this);
    }
    catch (Form::GradeTooLowException & other)
    {
        std::cout << "Don't signed. " << this->name << " bureaucrat grade very low " << std::endl;
    }
}

void Bureaucrat::executeForm(Form & other)
{
    try
    {
        other.execute(*this);
        std::cout << this->name << " executed " << other.getName() << std::endl;
    }
    catch (const char * buf)
    {
        std::cout << buf << std::endl;
    }
    catch (Form::GradeTooLowException & other)
    {
        std::cout << "Don't execute. " << this->name << " bureaucrat grade very low." << std::endl;
    }
}
