#include "Harl.hpp"

int main(int arc, char **arv)
{
    Harl answer;
    int sum;

    if (arc != 2)
    {
        std::cout << "Next time it will work" << std::endl;
        return 0;
    }
    sum = sum_char(arv[1]);
    answer.complain(sum);
//    (void )arv;
//    (void )arc;
//    sum = sum_char("DEBUG");
//    std::cout << sum << std::endl;
//
//    sum = sum_char("INFO");
//    std::cout << sum << std::endl;
//
//    sum = sum_char("WARNING");
//    std::cout << sum << std::endl;
//
//    sum = sum_char("ERROR");
//    std::cout << sum << std::endl;
    return 0;
}