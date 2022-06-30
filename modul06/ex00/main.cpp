#include "Conversion.hpp"

int main(int arc, char **arv)
{
    if (arc != 2)
    {
        std::cout << RED << "ERROR ARGUMENT." << DEFAULT << std::endl;
        return (0);
    }
    std::cout << BLUE << "______________________________" << DEFAULT << std::endl;
    Conversion a(arv[1]);
    (void )a;
    std::cout << BLUE << "______________________________" << DEFAULT << std::endl;
}