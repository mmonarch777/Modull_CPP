#include "easyfind.hpp"

int main()
{
    std::vector<int> vector_1;
    std::vector<int> vector_2;

    for (int i = 0; i < 20; i++)
    {
        vector_1.push_back(i);
        vector_2.push_back(i);
    }
    try
    {
        std::cout << BLUE << "-------------VECTOR_1-------------" << DEFAULT << std::endl;
        easyfind(vector_1, 5);
        easyfind(vector_1, 15);
        easyfind(vector_1, 21);
    }
    catch (std::exception & other)
    {
        std::cout << RED << other.what() << DEFAULT << std::endl;
    }
    try
    {
        std::cout << BLUE << "-------------VECTOR_2-------------" << DEFAULT << std::endl;
        easyfind(vector_2, 10);
        easyfind(vector_2, 3);
        easyfind(vector_2, -1);
    }
    catch (std::exception & other)
    {
        std::cout << RED << other.what() << DEFAULT << std::endl;
    }
    std::cout << BLUE << "----------PROGRAM FINISH----------" << DEFAULT << std::endl;
}
