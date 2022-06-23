#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::complain(std::string level)
{
    void (Harl::*f[])() = {&Harl::debug, &Harl::error, &Harl::info, &Harl::warning};
    switch (level[0])
    {
        case 68:
            (this->*f[0])();
            break;
        case 69:
            (this->*f[1])();
            break;
        case 73:
            (this->*f[2])();
            break;
        case 87:
            (this->*f[3])();
            break;
        default:
            break;
    }
}

void Harl::debug(void )
{
    std::cout << "DEBUG" << std::endl;
    std::cout << "I love having extra bacon for my\n"
                 "7XL-double-cheese-triple-pickle-specialketchup burger.\n"
                 "I really do!" << std::endl;
}
void Harl::info(void )
{
    std::cout << "INFO" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put\n"
                 "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void )
{
    std::cout << "WARNING" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for\n"
                 "years whereas you started working here since last month." << std::endl;
}
void Harl::error(void )
{
    std::cout << "ERROR" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
