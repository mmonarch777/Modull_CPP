#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"


class Ice : public AMateria
{
protected:

    std::string type;

public:

    Ice(void ): AMateria("ice")
    {
        type = "ice";
        std::cout << "Ice default constructor is called." << std::endl;
    }
//    Ice(std::string const & type): AMateria(type)
//    {
//        this->type = type;
//        std::cout << "Ice constructor with params is called." << std::endl;
//    }
    Ice(const Ice & other): AMateria(other.type)
    {
        *this = other;
        std::cout << "Ice copy constructor is called." << std::endl;
    }
    ~Ice()
    {
        std::cout << "Ice destructor is called." << std::endl;
    }
    Ice & operator=(const Ice & other)
    {
        if (this != & other)
        {
            type = other.type;
            std::cout << "Ice assignment operator is called." << std::endl;
        }
        else
            std::cout << "Ice self-assigment is here." << std::endl;
        return *this;
    }
    AMateria * clone()const
    {
        return new Ice(*this);
    }
    void use(ICharacter & target)
    {
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    }
};


#endif