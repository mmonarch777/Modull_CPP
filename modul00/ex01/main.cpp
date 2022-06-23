#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

int main(int arc, char **arv)
{
    PhoneBook   book;
    std::string input;
    int         id;

    if (arc > 1)
    {
        std::cout << "To many argument for program: " << arv[0] << std::endl;
        return (0);
    }
    else
    {
        id = 0;
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "Hellow. Enter one of three commands:" << std::endl;
        std::cout << "1) ADD   : save a new contact." << std::endl;
        std::cout << "2) SEARCH: display a specific contact." << std::endl;
        std::cout << "3) EXIT  : the program quits." << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        while (1)
        {
            std::cout << "Enter command: " << std::endl;
            std::getline(std::cin, input);
            if (input == "ADD")
            {
                book.add_contactlist(&id);
                if (id == 8)
                    id = 0;
            }
            else if (input == "SEARCH")
            {
                book.show_contactlist();
            }
            else if (input == "EXIT")
            {
                std::cout << "GOOD BUY" << std::endl;
                return (0);
            }
            else
                std::cout << "Try again..." << std::endl;
            clearerr(stdin);
            std::cin.clear();
            fflush(stdin);
        }
    }
}