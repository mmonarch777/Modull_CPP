#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"
# include <iomanip>

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();
    void add_contactlist(int *id);
    std::string get_line(std::string str);
    void show_contactlist(void );

private:
    Contact     contactlist[8];
    int         count;
};

#endif