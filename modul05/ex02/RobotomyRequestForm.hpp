#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <unistd.h>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string target;

public:

    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm & other);
    ~RobotomyRequestForm();
    RobotomyRequestForm & operator=(const RobotomyRequestForm & other);

    void execute(Bureaucrat const & other) const;

};

#endif