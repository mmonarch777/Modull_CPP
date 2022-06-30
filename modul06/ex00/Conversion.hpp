#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <cctype>
#include <string>
#include <cmath>
#include <cfloat>
#include <exception>
#include <iomanip>

#define DEFAULT	"\033[0m"
#define BLACK	"\033[90m"
#define RED		"\033[91m"
#define GREEN	"\033[92m"
#define YELLOW	"\033[93m"
#define BLUE	"\033[94m"
#define MAGENTA	"\033[95m"
#define CYAN	"\033[96m"
#define WHITE	"\033[97m"

class Conversion
{
private:

    std::string line;
    int         inT;
    float       floaT;
    double      doublE;

public:

    Conversion(std::string line);
    Conversion(const Conversion & other);
    ~Conversion();

    Conversion & operator=(const Conversion & other);

    bool literal_char(std::string line);
    bool literal_int(std::string line);
    bool literal_float(std::string line);
    void literal_double(std::string line);
    bool print_char(char c);
    bool print_int(int i);
    bool print_float(float f);
    void print_double(double d);

};
#endif