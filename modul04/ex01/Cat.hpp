#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public Animal
{
private:

    Brain *catBrain;

public:

    Cat();
    Cat(std::string type);
    Cat(const Cat & other);
    ~Cat();
    Cat & operator=(const Cat & other);

    void makeSound()const;

};

#endif