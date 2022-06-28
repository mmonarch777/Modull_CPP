#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5)
{
    this->target = target;
    std::cout << "PresidentialPardonForm constructor params." << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other):
        Form(other.getName(), other.getSignGrade(), other.getExecuteGrade())
{
    this->target = other.target;
    std::cout << "PresidentialPardonForm copy constructor." << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor." << std::endl;
}
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & other)
{
    if (this != &other)
    {
        target = other.target;
        std::cout << "PresidentialPardonForm assignment operator." << std::endl;
    }
    else
        std::cout << "PresidentialPardonForm self-assignment." << std::endl;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & other) const
{
    if (other.getGrade() <= this->getExecuteGrade() && this->getItSigned() == true)
    {
        std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
    else if (this->getItSigned() == false)
        throw "PresidentialPardonForm Form DON'T EXECUTE!!!";
    else
        throw GradeTooLowException("execute");
}