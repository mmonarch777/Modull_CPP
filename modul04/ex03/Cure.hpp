#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"


class Cure : public AMateria
{
protected:

    std::string type;

public:

    Cure(void );
    Cure(const Cure & other);
    ~Cure();
    Cure & operator=(const Cure & other);

    AMateria * clone()const;

    void use(ICharacter & target);

};

#endif
