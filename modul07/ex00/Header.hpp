#ifndef HEADER_HPP
# define HEADER_HPP

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
void swap(Type &a, Type &b)
{
    Type c;
    c = a;
    a = b;
    b = c;
};

template <typename Type>
Type min(Type &a, Type &b)
{
    return (a > b ? b : a);
};

template <typename Type>
Type max(Type &a, Type &b)
{
    return (a > b ? a : b);
};

#endif