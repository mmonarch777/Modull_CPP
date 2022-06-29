#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int	main()
{
    Intern Vasiliy;
    Form * newForm1 = NULL;
    Form * newForm2 = NULL;
    Form * newForm3 = NULL;
    try
    {
        std::cout << "------------------------------------------" << std::endl;
        Bureaucrat mikle("Mikle", 3);

        std::cout << "------------------------------------------" << std::endl;
        newForm1 = Vasiliy.makeForm("Presidential", "Putin");
        mikle.signForm(*newForm1);
        mikle.executeForm(*newForm1);
        std::cout << "------------------------------------------" << std::endl;
        newForm2 = Vasiliy.makeForm("Robotomy", "Chapy");
        mikle.signForm(*newForm2);
        mikle.executeForm(*newForm2);
        std::cout << "------------------------------------------" << std::endl;
        newForm3 = Vasiliy.makeForm("Shrubbery", "Home");
        mikle.signForm(*newForm3);
        mikle.executeForm(*newForm3);
        std::cout << "------------------------------------------" << std::endl;
    }
    catch (Form::GradeTooLowException & ex)
    {
        if (ex.target == "default")
            std::cout << ex.massage_default() << std::endl;
        else if (ex.target == "sign")
            std::cout << ex.massage_sign() << std::endl;
    }
    catch (Form::GradeTooHighException & ex)
    {
        if (ex.target == "default")
            std::cout << ex.massage_default() << std::endl;
        else if (ex.target == "sign")
            std::cout <<ex.massage_sign() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & ex)
    {
        std::cout << ex.message() << std::endl;
    }
    catch (Bureaucrat::GradeTooHightException & ex)
    {
        std::cout << ex.message() << std::endl;
    }
    catch (const char * buf)
    {
        std::cout << buf << std::endl;
    }
    catch (std::string line)
    {
        std::cout << line << std::endl;
    }

    std::cout << "PROGRAM FINISH!" << std::endl;
    if (newForm1 != NULL)
        delete newForm1;
    if (newForm2 != NULL)
        delete newForm2;
    if (newForm3 != NULL)
        delete newForm3;
    return (0);
}
