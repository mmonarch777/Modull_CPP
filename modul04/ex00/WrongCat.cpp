#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat default constructor is called." << std::endl;
}
WrongCat::WrongCat(std::string type)
{
    (void )type;
    std::cout << "WrongCat constructor with params is called." << std::endl;
}
WrongCat::WrongCat(const WrongCat & other)
{
    *this = other;
    std::cout << "WrongCat copy constructor is called." << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor is colled." << std::endl;
}
WrongCat & WrongCat::operator=(const WrongCat & other)
{
    if (this != &other)
    {
        type = other.type;
        std::cout << "WrongCat assignment operator is called." << std::endl;
    }
    else
        std::cout << "WrongCat self-assignmet is here." << std::endl;
    return *this;
}
void WrongCat::makeSound()const
{
    std::cout << "WrongCat: meow meow meow." << std::endl;
}
