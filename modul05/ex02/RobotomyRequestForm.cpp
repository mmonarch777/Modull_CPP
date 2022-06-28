#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45)
{
    this->target = target;
    std::cout << "RobotomyRequestForm constructor params." << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other):
        Form(other.getName(), other.getSignGrade(), other.getExecuteGrade())
{
    this->target = other.target;
    std::cout << "RobotomyRequestForm copy constructor." << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor." << std::endl;
}
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & other)
{
    if (this != &other)
    {
        target = other.target;
        std::cout << "RobotomyRequestForm assignment operator." << std::endl;
    }
    else
        std::cout << "RobotomyRequestForm self-assignment." << std::endl;
    return *this;
}
void RobotomyRequestForm::execute(Bureaucrat const & other) const
{
    if (other.getGrade() <= this->getExecuteGrade() && this->getItSigned() == true)
    {
        std::cout << "dzzzzzzzzzzzzzzzzzzzzzz" << std::endl;
        sleep(1);
        std::cout << "..KKK...TRAX....BAX...BABAAX...." << std::endl;
        sleep(1);
        std::cout << "...AAAAAAAAAAAAA...." << std::endl;
        sleep(1);
        if (std::rand() % 2 == 0)
            std::cout << this->target << " has been robotomized SUCCESSFULLY!" << std::endl;
        else
            std::cout << this->target << " the robotomy FAILED!" << std::endl;
    }
    else if (this->getItSigned() == false)
        throw "RobotomyRequestForm Form DON'T EXECUTE!!!";
    else
        throw GradeTooLowException("execute");
}