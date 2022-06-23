#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::complain(int sum)
{
    void (Harl::*f[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    switch (sum)
    {
        case 359:
            (this->*f[0])();
        case 300:
            (this->*f[1])();
        case 534:
            (this->*f[2])();
        case 394:
            (this->*f[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}

void Harl::debug(void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my\n"
                 "7XL-double-cheese-triple-pickle-specialketchup burger.\n"
                 "I really do!" << std::endl << std::endl;
}
void Harl::info(void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put\n"
                 "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}
void Harl::warning(void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for\n"
                 "years whereas you started working here since last month." << std::endl << std::endl;
}
void Harl::error(void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}
