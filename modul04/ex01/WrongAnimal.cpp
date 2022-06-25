#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor is called." << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal & other)
{
    *this = other;
    std::cout << "WrongAnimal copy constructor is called." << std::endl;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor is colled." << std::endl;
}
WrongAnimal & WrongAnimal::operator=(const WrongAnimal & other)
{
    if (this != &other)
    {
        type = other.type;
        std::cout << "WrongAnimal assignment operator is called." << std::endl;
    }
    else
        std::cout << "WrongAnimal self-assignment is here." << std::endl;
    return *this;
}
std::string WrongAnimal::getType(void )const
{
    return this->type;
}
void WrongAnimal::makeSound()const
{
    std::cout << "WrongAnimal: default vote" << std::endl;
}
