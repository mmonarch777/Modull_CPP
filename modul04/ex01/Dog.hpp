#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:

    Brain *dogBrain;

public:

    Dog();
    Dog(std::string string);
    Dog(const Dog & other);
    ~Dog();
    Dog & operator=(const Dog & other);

    void makeSound()const;

};

#endif