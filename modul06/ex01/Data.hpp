#ifndef DATA_HPP
# define DATA_HPP
# include <iostream>

#define DEFAULT	"\033[0m"
#define BLACK	"\033[90m"
#define RED		"\033[91m"
#define GREEN	"\033[92m"
#define YELLOW	"\033[93m"
#define BLUE	"\033[94m"
#define MAGENTA	"\033[95m"
#define CYAN	"\033[96m"
#define WHITE	"\033[97m"

struct Data
{
    std::string line;
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t ptr);


#endif