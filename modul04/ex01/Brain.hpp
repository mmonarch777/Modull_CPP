#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

# define LEN 100

class Brain
{
protected:

    std::string ideas[LEN];

public:

    Brain();
    Brain(std::string value);
    Brain(const Brain & other);
    ~Brain();
    Brain & operator=(const Brain & other);

};

#endif