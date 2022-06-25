#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat default constructor is called." << std::endl;
}
Cat::Cat(std::string type)
{
    (void )type;
    std::cout << "Cat constructor with params is called." << std::endl;
}
Cat::Cat(const Cat & other)
{
    *this = other;
    std::cout << "Cat copy constructor is called." << std::endl;
}
Cat::~Cat()
{
    std::cout << "Cat destructor is colled." << std::endl;
}
Cat & Cat::operator=(const Cat & other)
{
    if (this != &other)
    {
        type = other.type;
        std::cout << "Cat assignment operator is called." << std::endl;
    }
    else
        std::cout << "Cat self-assignmet is here." << std::endl;
    return *this;
}
void Cat::makeSound()const
{
    std::cout << "Cat: meow meow meow." << std::endl;
}
