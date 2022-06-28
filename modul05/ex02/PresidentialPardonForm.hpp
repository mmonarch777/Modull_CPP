#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string target;

public:

    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm & other);
    ~PresidentialPardonForm();
    PresidentialPardonForm & operator=(const PresidentialPardonForm & other);


    void execute(Bureaucrat const & other) const;

};

#endif