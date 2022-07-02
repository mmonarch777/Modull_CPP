#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <vector>
# include <list>
# include <exception>

# define DEFAULT	"\033[0m"
# define BLACK	    "\033[90m"
# define RED		"\033[91m"
# define GREEN	    "\033[92m"
# define YELLOW	    "\033[93m"
# define BLUE	    "\033[94m"
# define MAGENTA	"\033[95m"
# define CYAN	    "\033[96m"
# define WHITE	    "\033[97m"

template <typename T>
void easyfind(T s, int i)
{
    if (std::find(s.begin(), s.end(), i) == s.end())
        throw (std::runtime_error("Error, element not found."));
    std::cout << GREEN << "Success, element found." << DEFAULT << std::endl;
}

#endif