#ifndef ARRAY_HPP
# define ARRAY_HPP
# include "iostream"

# define DEFAULT	"\033[0m"
# define BLACK	    "\033[90m"
# define RED		"\033[91m"
# define GREEN	    "\033[92m"
# define YELLOW	    "\033[93m"
# define BLUE	    "\033[94m"
# define MAGENTA	"\033[95m"
# define CYAN	    "\033[96m"
# define WHITE	    "\033[97m"

template <class T>
class Array
{
private:

    T               *data;
    unsigned int    size;

public:

    Array():data(NULL)
    {
        std::cout << CYAN << "Default constructor." << DEFAULT << std::endl;
    }
    Array(unsigned int size): size(size)
    {
        std::cout << MAGENTA << "Constructor with params." << DEFAULT << std::endl;
        data = new T[size];
        for (unsigned int i = 0;i < size; i++)
            data[i] = 0;
    }
    Array(const Array &other)
    {
        std::cout << YELLOW << "Copy constructor." << DEFAULT << std::endl;
        size = other.size;
        data = new T[other.size];
        for (unsigned int i = 0; i < other.size; i++)
            data[i] = other.data[i];
    }
    ~Array()
    {
        std::cout << CYAN << "Destructor." << DEFAULT << std::endl;
        delete []data;
    }
    Array &operator=(const Array &other)
    {
        std::cout << BLUE << "Assignment operator." << DEFAULT << std::endl;
        if (this != &other)
        {
            size = other.size;
            delete []data;
            data = new T[other.size];
            for (unsigned int i = 0; i < other.size; i++)
                data[i] = other.data[i];
        }
        return *this;
    }
    T &operator[](unsigned  int index)
    {
        if (index >= size)
            throw (std::out_of_range("Index is out of range!"));
        return (data[index]);
    }
    size_t getsize()
    {
        return ((size_t)size);
    }
    void change(int index, int value)
    {
        data[index] = value;
    }
};

#endif