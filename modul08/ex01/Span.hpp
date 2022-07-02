#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <exception>
# include <vector>
# include <list>

#define DEFAULT	"\033[0m"
#define BLACK	"\033[30m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define MAGENTA	"\033[35m"
#define CYAN	"\033[36m"
#define WHITE	"\033[37m"

class Span
{
private:

    unsigned int        size;
    unsigned int        fact_size;
    std::vector<int>     arr;

public:

    Span(unsigned int size);
    Span(const Span & other);
    ~Span();

    Span &operator=(const Span & other);

    void addNumber(int nb);
    void fill_vector();
    int get_value(int i);
    void print_arr();

    int shortestSpan();
    int longestSpan();

    class spanEx : public std::exception
    {
    public:

        std::string line;
        spanEx(std::string line);
        ~spanEx() throw();

        std::string message();

    };
};



#endif