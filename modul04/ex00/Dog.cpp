#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog default constructor is called." << std::endl;
}
Dog::Dog(std::string type)
{
    this->type = type;
    std::cout << "Dog constructor with params is called." << std::endl;
}
Dog::Dog(const Dog & other)
{
    *this = other;
    std::cout << "Dog copy constructor is called." << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog destructor is colled." << std::endl;
}
Dog & Dog::operator=(const Dog & other)
{
    if (this != &other)
    {
        type = other.type;
        std::cout << "Dog assignment operator is called." << std::endl;
    }
    else
        std::cout << "Dog self-assignment is called." << std::endl;
    return *this;
}
void Dog::makeSound()const
{
    std::cout << "Dog: gav gav gav." << std::endl;
}
