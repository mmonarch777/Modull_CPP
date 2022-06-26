#include "Dog.hpp"


Dog::Dog(): Animal("Dog")
{
    dogBrain = new Brain("DOG");
    std::cout << "Dog default constructor is called." << std::endl;
}
Dog::Dog(std::string string): Animal("Dog")
{
    dogBrain = new Brain(string);
    std::cout << "Dog constructor with params is called." << std::endl;
}
Dog::Dog(const Dog & other)
{
    type = other.type;
    dogBrain = new Brain;
    for (int i = 0; i < LEN; i++)
        dogBrain[i] = other.dogBrain[i];
    std::cout << "Dog copy constructor is called." << std::endl;
}
Dog::~Dog()
{
    delete dogBrain;
    std::cout << "Dog destructor is colled." << std::endl;
}
Dog & Dog::operator=(const Dog & other)
{
    if (this != &other)
    {
        delete dogBrain;
        type = other.type;
        dogBrain = new Brain;
        for (int i = 0; i < LEN; i++)
            dogBrain[i] = other.dogBrain[i];
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
