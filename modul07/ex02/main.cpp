#include "Array.hpp"

#define MAX_VALUE 3

int main(int, char**)
{
    Array<int> numbers( MAX_VALUE);
    int* mirror = new int[MAX_VALUE];
    srand(time(NULL));
    for (int i = 0; i < MAX_VALUE; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        tmp = test;
        std::cout << WHITE << test[1] << DEFAULT << std::endl;
//        tmp.change(1, 76);
        std::cout <<GREEN<< numbers.getsize() << DEFAULT << std::endl;
        std::cout <<GREEN<< tmp.getsize() << DEFAULT << std::endl;
        std::cout <<GREEN<< test.getsize() << DEFAULT << std::endl;
        for (int i = 0; i < MAX_VALUE; i++)
        {
            if (mirror[i] != numbers[i] || mirror[i] != tmp[i]  ||mirror[i] != test[i])
            {
                std::cerr << RED << "Didn't save the same value!!" << DEFAULT << std::endl;
                return 1;
            }
        }
    }

    for (int i = 0; i < MAX_VALUE; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << DEFAULT << '\n';
    }
    try
    {
        numbers[40] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << DEFAULT << '\n';
    }

    for (int i = 0; i < MAX_VALUE; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    std::cout << BLUE << "---------------------------------------" << DEFAULT << std::endl;
    Array<float> flot(10);
    std::cout <<GREEN<< flot.getsize() << DEFAULT << std::endl;
    for (int i = 0; i < 10; i++)
    {
        const int value = rand();
        flot[i] = value;
    }
    std::cout << WHITE << flot[3] << DEFAULT << std::endl;
    std::cout << BLUE << "---------------------------------------" << DEFAULT << std::endl;
    return 0;
}
