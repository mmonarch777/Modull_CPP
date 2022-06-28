#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
    std::cout << "------------------------------------------" << std::endl;
    try
    {
        Form a11("a11", 20, 0);
        std::cout << a11;
        Bureaucrat mikle("Mikle", 155);
        std::cout << mikle;
        std::cout << "------------------------------------------" << std::endl;
        mikle.signForm(a11);
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
//    Bureaucrat mikle("Mikle", 1);
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "PROGRAM FINISH!" << std::endl;
    fflush(stdout);
    return (0);
}
