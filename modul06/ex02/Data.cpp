#include "Data.hpp"

Base *generate(void )
{
    int ran = rand();
    if (ran % 10 >= 7)
        return (new A);
    else if (ran % 10<= 3)
        return (new B);
    else
        return (new C);
}

void identify(Base *p)
{
    if (dynamic_cast<B *>(p) != nullptr)
        std::cout << GREEN << "Class B" << DEFAULT << std::endl;
    else if (dynamic_cast<A *>(p) != nullptr)
        std::cout << GREEN << "Class A" << DEFAULT << std::endl;
    else if (dynamic_cast<C *>(p) != nullptr)
        std::cout << GREEN << "Class C" << DEFAULT << std::endl;
    else
        std::cout << RED << "I'm dead..." << DEFAULT << std::endl;
}

void identify(Base &p)
{
    if (dynamic_cast<A *>(&p) != nullptr)
        std::cout << GREEN << "Class A" << DEFAULT << std::endl;
    else if (dynamic_cast<B *>(&p) != nullptr)
        std::cout << GREEN << "Class B" << DEFAULT << std::endl;
    else if (dynamic_cast<C *>(&p) != nullptr)
        std::cout << GREEN << "Class C" << DEFAULT << std::endl;
    else
        std::cout << RED << "I'm dead..." << DEFAULT << std::endl;
}
