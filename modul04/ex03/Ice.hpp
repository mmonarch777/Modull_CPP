#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"
//# include "ICharacter.hpp"


class Ice : public AMateria
{
protected:

    std::string type;

public:

    Ice(void );
//    Ice(std::string const & type);
    Ice(const Ice & other);
    ~Ice();
    Ice & operator=(const Ice & other);

    AMateria * clone()const;

    void use(ICharacter & target);

};


#endif