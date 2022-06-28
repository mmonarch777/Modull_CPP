#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
    std::cout << "ShrubberyCreationForm constructor params." << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other):
        Form(other.getName(), other.getSignGrade(), other.getExecuteGrade())
{
    this->target = other.target;
    std::cout << "ShrubberyCreationForm copy constructor." << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor." << std::endl;
}
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other)
{
    if (this != &other)
    {
        target = other.target;
        std::cout << "ShrubberyCreationForm assignment operator." << std::endl;
    }
    else
        std::cout << "ShrubberyCreationForm self-assignment." << std::endl;
    return *this;
}
void ShrubberyCreationForm::execute(Bureaucrat const & other) const
{
    if (other.getGrade() <= this->getExecuteGrade() && this->getItSigned() == true)
    {
        std::ofstream out(this->target + "_shrubbery");
        out << "....................................\n"
               "....................................\n"
               "....................................\n"
               "....................................\n"
               "..........&&&&&&&&&&&&&&&...........\n"
               "..........&&&&&&&&&&&&&&&...........\n"
               "..........&&&&&&&&&&&&&&&...........\n"
               "..........&&&&&&&&&&&&&&&...........\n"
               "..........&&&&&&&&&&&&&&&...........\n"
               "..........&&&&&&&&&&&&&&&...........\n"
               "..........&&&&&&&&&&&&&&&...........\n"
               "..........&&&&&&&&&&&&&&&...........\n"
               "..........&&&&&&&&&&&&&&&...........\n"
               "....................................\n"
               "....................................\n"
               "....................................\n"
               "...................................." << std::endl;
        out.close();
    }
    else if (this->getItSigned() == false)
        throw "ShrubberyCreationForm Form DON'T EXECUTE!!!";
    else
        throw GradeTooLowException("execute");
}