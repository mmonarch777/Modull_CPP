#include "Span.hpp"
#define SIZE 1

int main()
{
    srand(time(NULL));
    std::cout << BLUE << "--------------TEST 1--------------" << DEFAULT << std::endl;
    try
    {
        Span first(SIZE);

        first.fill_vector();
        first.print_arr();
        first.addNumber(76);

        std::cout << CYAN << first.shortestSpan() << DEFAULT << std::endl;
        std::cout << CYAN << first.longestSpan() << DEFAULT << std::endl;
        std::cout << MAGENTA << "MAX_INT 2147483647" << DEFAULT << std::endl;
    }
    catch (Span::spanEx & other)
    {
        std::cout << RED << other.message() << DEFAULT << std::endl;
    }

    std::cout << BLUE << "--------------TEST 2--------------" << DEFAULT << std::endl;

    try
    {
        Span second(10);

        second.addNumber(1);
        second.addNumber(11);
        second.addNumber(13);
        second.addNumber(3);
        second.addNumber(6);
        second.addNumber(17);
        second.addNumber(4);
        second.addNumber(18);
        second.addNumber(30);
        second.addNumber(25);
        second.addNumber(100);

        std::cout << CYAN << second.shortestSpan() << DEFAULT << std::endl;
        std::cout << CYAN << second.longestSpan() << DEFAULT << std::endl;
    }
    catch (Span::spanEx & other)
    {
        std::cout << RED << other.message() << DEFAULT << std::endl;
    }
    std::cout << BLUE << "----------PROGRAM FINISH----------" << DEFAULT << std::endl;
}