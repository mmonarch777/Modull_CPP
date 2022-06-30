#include "Conversion.hpp"

Conversion::Conversion(std::string line): line(line)
        {
                if (literal_char(line))
                return;
                if (literal_int(line))
                return;
                if (literal_float(line))
                return;
                literal_double(line);

        }
Conversion::Conversion(const Conversion & other)
{
    line = other.line;
}
Conversion::~Conversion()
{
}
Conversion & Conversion::operator=(const Conversion & other)
{
    if (this != &other)
        line = other.line;
    return *this;
}
bool Conversion::literal_char(std::string line)
{
    if (line.length() == 1 && !isdigit(line[0]))
        return print_char(line[0]);
    else
        return false;
}
bool Conversion::literal_int(std::string line)
{
    try
    {
        const char *buf = line.data();
        if ((line[0] != '-' && line[0] != '+' && !isdigit(line[0])))
            return false;
        if (line.find(".", 0) != std::string::npos || line.find("f", 0) != std::string::npos)
            return false;
        if (std::strtod(buf, 0) > INT_MAX || std::strtod(buf, 0) < INT_MIN)
            return false;
        inT = std::stoi(line);
        print_int(inT);
    }
    catch (std::exception & other)
    {
        std::cout << RED << "int: " << other.what() << DEFAULT << std::endl;
    }
    return true;
}
bool Conversion::literal_float(std::string line)
{
    try
    {
        const char *buf = line.data();
        if (line.find("f", 0) == std::string::npos)
            return false;
//        if (std::strtod(buf, 0) > FLT_MAX || std::strtod(buf, 0) < FLT_MIN)
//            return false;
        floaT = static_cast<float>(strtof(buf, 0));
        print_float(floaT);
    }
    catch (std::exception & other)
    {
        std::cout << RED << "float: " << other.what() << DEFAULT << std::endl;
    }
    return true;
}
void Conversion::literal_double(std::string line)
{
    try
    {
        const char *buf = line.data();
        doublE = std::strtod(buf, 0);
        print_double(doublE, line);
    }
    catch (std::exception & other)
    {
        std::cout << RED << "double: " << other.what() << DEFAULT << std::endl;
    }
}
bool Conversion::print_char(char c)
{
    if (std::isprint(c))
        std::cout << CYAN << "char: \t" << GREEN << c << DEFAULT << std::endl;
    else
        std::cout << CYAN << "char: \t" << YELLOW << "Non displayable" << DEFAULT << std::endl;
    std::cout << CYAN << "int: \t" << GREEN << static_cast<int>(c) << DEFAULT << std::endl;
    std::cout << CYAN << "float: \t" << GREEN << static_cast<float>(c) << ".0f" << DEFAULT << std::endl;
    std::cout << CYAN << "double: " << GREEN << static_cast<double>(c) << ".0" DEFAULT << std::endl;
    return true;
}
bool Conversion::print_int(int i)
{
    if (std::isprint(i))
        std::cout << CYAN << "char: \t" << GREEN << static_cast<char>(i) << DEFAULT << std::endl;
    else if(i <= CHAR_MAX && i >= CHAR_MIN)
        std::cout << CYAN << "char: \t" << YELLOW << "Non displayable" << DEFAULT << std::endl;
    else
        std::cout << CYAN << "char: \t" << RED << "impossible" << DEFAULT << std::endl;
    std::cout << CYAN << "int: \t" << GREEN << i << DEFAULT << std::endl;
    std::cout << CYAN << "float \t" << GREEN << std::fixed << std::setprecision(1)
              << static_cast<float>(i) << "f" << DEFAULT << std::endl;
    std::cout << CYAN << "double: " << GREEN << static_cast<double>(i) << DEFAULT << std::endl;
    return true;
}
bool Conversion::print_float(float f)
{
    if (std::isprint((int)f))
        std::cout << CYAN << "char: \t" << GREEN << static_cast<char>(f) << DEFAULT << std::endl;
    else if((int)f <= CHAR_MAX && (int)f >= CHAR_MIN)
        std::cout << CYAN << "char: \t" << YELLOW << "Non displayable" << DEFAULT << std::endl;
    else
        std::cout << CYAN << "char: \t" << RED << "impossible" << DEFAULT << std::endl;
    if (static_cast<long int>(f) > INT_MAX || static_cast<long int>(f) < INT_MIN)
        std::cout << CYAN << "int: \t" << RED << "impossible" << DEFAULT << std::endl;
    else
        std::cout << CYAN << "int: \t" << GREEN << static_cast<int>(f) << DEFAULT << std::endl;
    std::cout << CYAN << "float \t" << GREEN << std::fixed << std::setprecision(1)
              << static_cast<float>(f) << "f" << DEFAULT << std::endl;
    std::cout << CYAN << "double: " << GREEN << static_cast<double>(f) << DEFAULT << std::endl;
    return true;
}
void Conversion::print_double(double d, std::string line)
{
    if (std::isprint((int)d))
        std::cout << CYAN << "char: \t" << GREEN << static_cast<char>(d) << DEFAULT << std::endl;
    else if((int)d <= CHAR_MAX && (int)d >= CHAR_MIN)
        std::cout << CYAN << "char: \t" << YELLOW << "Non displayable" << DEFAULT << std::endl;
    else
        std::cout << CYAN << "char: \t" << RED << "impossible" << DEFAULT << std::endl;
    if (static_cast<long int>(d) > INT_MAX || static_cast<long int>(d) < INT_MIN)
        std::cout << CYAN << "int: \t" << RED << "impossible" << DEFAULT << std::endl;
    else if (line == "nan")
        std::cout << CYAN << "int: \t" << RED << "impossible" << DEFAULT << std::endl;
    else
        std::cout << CYAN << "int: \t" << GREEN << static_cast<int>(d) << DEFAULT << std::endl;
    if (d > FLT_MAX || d < FLT_MIN)
        std::cout << CYAN << "float: \t" << RED << "impossible" << DEFAULT << std::endl;
    else
        std::cout << CYAN << "float \t" << GREEN << std::fixed << std::setprecision(1)
                  << static_cast<float>(d) << "f" << DEFAULT << std::endl;
    std::cout << CYAN << "double: " << GREEN << d << DEFAULT << std::endl;
}
