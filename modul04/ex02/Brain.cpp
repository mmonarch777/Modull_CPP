#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < LEN; i++)
        ideas[i] = "line #" + std::to_string(i);
    std::cout << "Brain default constructor is called." << std::endl;
}
Brain::Brain(std::string value)
{
    for (int i = 0; i < LEN; i++)
        ideas[i] = value;
std::cout << "Brain constructor with params is called." << std::endl;
}
Brain::Brain(const Brain & other)
{
    for (int i = 0; i < LEN; i++)
        ideas[i] = other.ideas[i];
    std::cout << "Brain copy constructor is called." << std::endl;
}
Brain::~Brain()
{
    std::cout << "Brain deastructor is called." << std::endl;
}
Brain & Brain::operator=(const Brain & other)
{
    if (this != &other)
    {
        for (int i = 0; i < LEN; i++)
            ideas[i] = other.ideas[i];
        std::cout << "Brain assignment operator is called." << std::endl;
    }
    else
        std::cout << "Brain self-assignment is here." << std::endl;
    return *this;
}
