#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    catBrain = new Brain("CAT");
    std::cout << "Cat default constructor is called." << std::endl;
}
Cat::Cat(std::string string): Animal("Cat")
{
    catBrain = new Brain(string);
    std::cout << "Cat constructor with params is called." << std::endl;
}
Cat::Cat(const Cat & other)
{
    type = other.type;
    catBrain = new Brain;
    for (int i = 0;i < LEN; i++)
        catBrain[i] = other.catBrain[i];
    std::cout << "Cat copy constructor is called." << std::endl;
}
Cat::~Cat()
{
    delete catBrain;
    std::cout << "Cat destructor is colled." << std::endl;
}
Cat & Cat::operator=(const Cat & other)
{
    if (this != &other)
    {
        delete catBrain;
        type = other.type;
        catBrain = new Brain;
        for (int i = 0; i < LEN; i++)
            catBrain[i] = other.catBrain[i];
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
