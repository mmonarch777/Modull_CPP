#include <iostream>

int main(int argc, char **argv)
{
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int y = 1; y < argc; y++)
        {
            for (int x = 0; argv[y][x]; x++)
                std::cout << (char)std::toupper(argv[y][x]);
        }
        std::cout << std::endl;
    }
}
