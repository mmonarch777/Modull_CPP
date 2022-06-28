#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern default constructor." << std::endl;
}
Intern::~Intern()
{
    std::cout << "Intern destructor." << std::endl;
}
Form * Intern::makeForm(std::string name, std::string target)
{
    Form *create_form;
    int number = -1;
    std::string arr[3] = {"Presidential", "Robotomy", "Shrubbery"};

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == name)
        {
            number = i;
            std::cout << "Intern creates " << name << " Form" << std::endl;
        }
    }
    switch (number)
    {
        case 0:
            create_form = new PresidentialPardonForm(target);
            break;
        case 1:
            create_form = new RobotomyRequestForm(target);
            break;
        case 2:
            create_form = new ShrubberyCreationForm(target);
            break;
        default:
            create_form = NULL;
            std::cout << "Intern can't creates " << name << std::endl;
            break;
    }
    return create_form;
}