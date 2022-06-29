#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int	main()
{
    std::cout << "------------------------------------------" << std::endl;
    try
    {
        ShrubberyCreationForm shrubbe("home");
        RobotomyRequestForm robot("robot");
        PresidentialPardonForm president("president");
        std::cout << "------------------------------------------" << std::endl;
        std::cout << shrubbe << std::endl;
        std::cout << robot << std::endl;
        std::cout << president;
        std::cout << "------------------------------------------" << std::endl;
        Bureaucrat yrick("Yrick", 75);
        std::cout << yrick;
        yrick.signForm(shrubbe);
        yrick.signForm(robot);
        yrick.signForm(president);
        yrick.executeForm(shrubbe);
        yrick.executeForm(robot);
        yrick.executeForm(president);
        std::cout << "------------------------------------------" << std::endl;
        Bureaucrat mikle("Mikle", 1);
        std::cout << mikle;
        mikle.signForm(shrubbe);
        mikle.signForm(robot);
        mikle.signForm(president);
        mikle.executeForm(shrubbe);
        mikle.executeForm(robot);
        mikle.executeForm(president);
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
//    Bureaucrat mikle("Mikle", 1);
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "PROGRAM FINISH!" << std::endl;
    while(1)
        ;
    return (0);
}
