#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <fstream>
# include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
private:
    std::string target;

public:

    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm & other);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm & operator=(const ShrubberyCreationForm & other);

    void execute(Bureaucrat const & other) const;

};

#endif