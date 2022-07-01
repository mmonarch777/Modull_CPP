#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>


# define DEFAULT	"\033[0m"
# define BLACK	    "\033[90m"
# define RED		"\033[91m"
# define GREEN	    "\033[92m"
# define YELLOW	    "\033[93m"
# define BLUE	    "\033[94m"
# define MAGENTA	"\033[95m"
# define CYAN	    "\033[96m"
# define WHITE	    "\033[97m"

template <typename Type>
void iter(Type *arr, int size, void (*f)(Type &type, int i))
{
    int i;
    for (i = 0; i < size; i++)
        f(arr[i], i);
}

template <typename Type>
void print(Type *arr, int size)
{
    std::cout << BLUE << "------PRINT ARRAY------" << DEFAULT << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << MAGENTA << "arr[" << i << "]: \t" << GREEN << arr[i] << DEFAULT << std::endl;
    }
    std::cout << BLUE << "-----------------------" << DEFAULT << std::endl;
};

template <typename Type>
void increment(Type &value, int i)
{
    (void)i;
    value++;
    std::cout << YELLOW << "Function increment." << DEFAULT << std::endl;
}

template <typename Type>
void decrement(Type &value, int i)
{
    (void)i;
    value--;
    std::cout << YELLOW << "Function decrement." << DEFAULT << std::endl;
}
template <typename Type>
void print_len(Type arr, int num)
{

    int i;
    for (i = 0; arr[i]; i++){}
    std::cout << MAGENTA << "Size arr[" << num << "]: \t" << GREEN << i << DEFAULT << std::endl;
}

#endif