#include "Iter.hpp"

int main( void )
{
    int arr[] ={1, 2, 3 , 4, 5 ,6};
    std::string str[] = {"hellow", "world", "!!!"};
    char cha[] = {'h', 'e', 'l', 'l', 'o', 'w'};

    std::cout << BLUE << "------------------EXAMPLE1--------------------" << DEFAULT << std::endl;
    print(arr, 6);
    iter(arr, 6, decrement);
    print(arr, 6);

    std::cout << BLUE << "------------------EXAMPLE2--------------------" << DEFAULT << std::endl;
    print(str, 3);
    iter(str, 3, print_len);
    print(str, 3);

    std::cout << BLUE << "------------------EXAMPLE3--------------------" << DEFAULT << std::endl;
    print(cha, 6);
    iter(cha, 6, increment);
    print(cha, 6);

    std::cout << BLUE << "---PROGRAM FINISH---" << DEFAULT << std::endl;
}
