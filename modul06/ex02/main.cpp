#include "Data.hpp"

int main()
{
    std::srand(time(0));
    Base *x = NULL;

    std::cout << BLUE << "---Actual type by POINTER---" << DEFAULT << std::endl;
    Base *p = generate();
    identify(*p);
    delete p;
    std::cout << BLUE << "---Actual type by LINK---" << DEFAULT << std::endl;
    Base *pt = generate();
    identify(pt);
    std::cout << BLUE << "---Actual type by EMPTY POINTER---" << DEFAULT << std::endl;
    identify(x);
    delete pt;
    return 0;
}