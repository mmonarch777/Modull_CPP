#include "Data.hpp"

int main()
{
    Data *data = new Data;
    Data *data2;
    uintptr_t ptr;

    data->line = "Hellow world!";
    std::cout << BLUE << "----------------------------" << DEFAULT << std::endl;
    std::cout << GREEN <<  data->line << DEFAULT << std::endl;
    std::cout << CYAN << data << DEFAULT << std::endl;
    std::cout << BLUE << "----------------------------" << DEFAULT << std::endl;
    ptr = serialize(data);
    data2 = deserialize(ptr);
    std::cout << BLUE << "----------------------------" << DEFAULT << std::endl;
    std::cout << GREEN << data2->line << DEFAULT << std::endl;
    std::cout << CYAN << data2 << DEFAULT << std::endl;
    std::cout << BLUE << "----------------------------" << DEFAULT << std::endl;
    return 0;
}