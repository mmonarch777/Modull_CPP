#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor is called." << std::endl;
}
Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal constructor with params is called." << std::endl;
}
Animal::Animal(const Animal & other)
{
    *this = other;
    std::cout << "Animal copy constructor is called." << std::endl;
}
Animal::~Animal()
{
    std::cout << "Animal destructor is colled." << std::endl;
}
Animal & Animal::operator=(const Animal & other)
{
    if (this != &other)
    {
        type = other.type;
        std::cout << "Animal assignment operator is called." << std::endl;
    }
    else
        std::cout << "Animal self-assignment is here." << std::endl;
    return *this;
}
std::string Animal::getType(void )const
{
    return this->type;
}
void Animal::makeSound()const
{
    std::cout << "Animal: default vote" << std::endl;
}