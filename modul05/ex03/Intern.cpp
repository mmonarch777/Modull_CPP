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
    int i;
    std::string arr[3] = {"Presidential", "Robotomy", "Shrubbery"};

    for (i = 0; i < 3; i++)
    {
        if (arr[i] == name)
        {
            std::cout << "Intern creates " << name << " Form" << std::endl;
            break;
        }
    }
    switch (i)
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
            throw ("Intern don't creates Form " + name);
    }
    return create_form;
}