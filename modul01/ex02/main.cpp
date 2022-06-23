#include <iostream>

int main(void )
{
    std::string mass = "HI THIS IS BRAIN";
    std::string *stringPTR = &mass;
    std::string &stringREF = mass;

    std::cout << "---------------------------------------------------------" << std::endl;
    std::cout << "The memory address of the string variable: " << &mass << std::endl;
    std::cout << "The memory address held stringPTR        : " << stringPTR << std::endl;
    std::cout << "The memory address held stringREF        : " << &stringREF << std::endl;
    std::cout << "---------------------------------------------------------" << std::endl;
    std::cout << "The value of the string variable : " << mass << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    return 0;
}