#include "Bureaucrat.hpp"

int main()
{
    std::cout << "-----------------------------------------" << std::endl;
    try
    {
        Bureaucrat mikle("Mikle", 1);
//        Bureaucrat yrick("Yrick", 151);
        mikle.decrementGrade();
        std::cout << mikle.getGrade() << std::endl;
        mikle.incrementGrade();
        std::cout << mikle;
        mikle.incrementGrade();
        std::cout << "hellow world!!" << std::endl;
    }
    catch (Bureaucrat::GradeTooHightException & other)
    {
        std::cout << other.message() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & other)
    {
        std::cout << other.message() << std::endl;
    }
    std::cout << "-----------------------------------------" << std::endl;
    try
    {
        Bureaucrat mikle("Mikle", 151);
        mikle.decrementGrade();
        mikle.incrementGrade();
        mikle.incrementGrade();
        std::cout << "hellow world!!" << std::endl;
    }
    catch (Bureaucrat::GradeTooHightException & other)
    {
        std::cout << other.message() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & other)
    {
        std::cout << other.message() << std::endl;
    }
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "PROGRAM FINISH." << std::endl;
    return 0;
}
