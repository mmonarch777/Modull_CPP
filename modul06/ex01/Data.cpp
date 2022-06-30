#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
    std::cout << "serialize" << std::endl;
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t ptr)
{
    std::cout << "deserialize" << std::endl;
    return (reinterpret_cast<Data *>(ptr));
}