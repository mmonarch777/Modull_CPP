#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"


class Cure : public AMateria
{
protected:

    std::string type;

public:

    Cure(void ): AMateria("cure"  )
    {
        this->type = "cure";
        std::cout << "Cure default constructor is called." << std::endl;
    }
    Cure(const Cure & other): AMateria(other.type)
    {
        *this = other;
        std::cout << "Cure copy constructor is called." << std::endl;
    }
    ~Cure()
    {
        std::cout << "Cure destructor is called." << std::endl;
    }
    Cure & operator=(const Cure & other)
    {
        if (this != & other)
        {
            type = other.type;
            std::cout << "Cure assignment operator is called." << std::endl;
        }
        else
            std::cout << "Cure self-assigment is here." << std::endl;
        return *this;
    }
    AMateria * clone()const
    {
        return new Cure(*this);
    }
    void use(ICharacter & target)
    {
        std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    }
};

#endif