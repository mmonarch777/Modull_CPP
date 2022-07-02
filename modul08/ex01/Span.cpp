#include "Span.hpp"

Span::Span(unsigned int size): size(size)
{
    std::cout << YELLOW << "Span default constructor." << DEFAULT << std::endl;
}
Span::Span(const Span & other)
{
    std::cout << YELLOW << "Span copy constructor." << DEFAULT << std::endl;
    *this = other;
}
Span::~Span()
{
    std::cout << YELLOW << "Span destructor." << DEFAULT << std::endl;
}
Span &Span::operator=(const Span & other)
{
    if (this != &other)
    {
        std::cout << YELLOW << "Span assignment operator." << DEFAULT << std::endl;
        size = other.size;
        for (int i = 0; i < (int)size; i++)
        {
            arr[i] = other.arr[i];
        }
    }
    return *this;
}
void Span::addNumber(int nb)
{
    try
    {
        if(nb > INT_MAX || nb < 0)
            throw spanEx("Number is don't valid.");
        if(arr.size() >= size)
            throw spanEx("Vector is full!Can't add number.");
        arr.push_back(nb);
    }
    catch (Span::spanEx & other)
    {
        std::cout << RED << other.message() << DEFAULT << std::endl;
    }
}
void Span::fill_vector()
{
    for (int i = 0; i < (int)size; i++)
        addNumber(rand());
}
int Span::get_value(int i)
{
    return arr[i];
}
void Span::print_arr()
{
    for (int i = 0; i < (int)size; i++)
        std::cout << GREEN << get_value(i) << DEFAULT << std::endl;
}
int Span::shortestSpan()
{
    fact_size = arr.size();
    if (fact_size <= 1 || arr.empty())
        throw spanEx("Vector has one element or less!");
    std::sort(arr.begin(), arr.end());
    int min = INT_MAX;
    int buf;
    for (int i = 0; i < (int)fact_size - 1; i++ )
    {
        buf = arr[i + 1] - arr[i];
        if (buf < min)
            min = buf;
    }
    return (min);
}
int Span::longestSpan()
{
    fact_size = arr.size();
    if (fact_size <= 1 || arr.empty())
        throw spanEx("Vector has one element or less!");
    int min = *std::min_element(arr.begin(), arr.end());
    int max = *std::max_element(arr.begin(), arr.end());
    return (max - min);
}

Span::spanEx::spanEx(std::string line): line(line) {};
Span::spanEx::~spanEx() throw() {};

std::string Span::spanEx::message()
{
    return line;
}
