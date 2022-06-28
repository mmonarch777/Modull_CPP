#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int	main()
{
    std::cout << "------------------------------------------" << std::endl;
    Intern Vasiliy;
    Form * newForm1;
    Form * newForm2;
    Form * newForm3;

    std::cout << "------------------------------------------" << std::endl;
    newForm1 = Vasiliy.makeForm("Presidential", "Putin");
    newForm2 = Vasiliy.makeForm("Robotomy", "Chapy");
    newForm3 = Vasiliy.makeForm("Shrubbery", "Home");
    std::cout << "------------------------------------------" << std::endl;

    std::cout << "PROGRAM FINISH!" << std::endl;
    delete newForm1;
    delete newForm2;
    delete newForm3;
    return (0);
}
