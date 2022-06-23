#include "Harl.hpp"

int sum_char(std::string line)
{
    int sum;

    sum = 0;
    for (int i = 0; line[i]; i++)
        sum += line[i];
    return sum;
}