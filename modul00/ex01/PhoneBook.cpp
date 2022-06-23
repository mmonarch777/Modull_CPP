#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    count = 0;
}
PhoneBook::~PhoneBook()
{};
void PhoneBook::add_contactlist(int *id)
{
    if (!this->contactlist[*id].set_contact())
    {
        std::cout << "Contact added." << std::endl;
        ++(*id);
        if (count < 8)
            count++;
    }
    else
    {
        std::cout << "Invalid contact. There should be no empty fields." << std::endl;
    }
}
std::string PhoneBook::get_line(std::string str)
{
    std::string line;

    if (str.length() > 10)
    {
        line = str.substr(0, 9) + ".";
        return (line);
    }
    return str;
}
void PhoneBook::show_contactlist(void )
{
    int index;
    if (count == 0)
    {
        std::cout << "PhoneBook is empty..." << std::endl;
        return;
    }
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|" << std::setw(10) << std::right << "INDEX"
              << "|" << std::setw(10) << "FIRST NAME"
              << "|" << std::setw(10) << "LAST NAME"
              << "|" << std::setw(10) << "NICK NAME" << "|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    for (int i = 1; i <= count; i++)
    {
        std::cout << "|" << std::setw(10) << std::right << i
                  << "|" << std::setw(10) << get_line(contactlist[i - 1].get_val("first"))
                  << "|" << std::setw(10) << get_line(contactlist[i - 1].get_val("last"))
                  << "|" << std::setw(10) << get_line(contactlist[i - 1].get_val("nick"))
                  << "|" << std::endl;
    }
    std::cout << "---------------------------------------------" << std::endl;
    while (1)
    {
        std::cout << "Enter INDEX for full contact information: ";
        std::cin >> index;
        if (std::cin.eof() || std::cin.fail() || index > count || index == 0)
        {
            if (std::cin.eof())
            {
//                    std::cout << std::endl << "Incorrect index, try again.." << std::endl;
//                    clearerr(stdin);
//                    std::cin.clear();
//                    continue;
                std::cout << "..(eof).." << std::endl;
                return;
            }
            std::cout << "Incorrect index, try again.." << std::endl;
            clearerr(stdin);
            std::cin.clear();
            while (std::cin.get() != '\n');
            continue;
        }
        else
            break;
    }
    contactlist[index - 1].get_full_info();
}