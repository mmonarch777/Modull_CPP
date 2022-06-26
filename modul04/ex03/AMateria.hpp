#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
protected:
    std::string type;
public:

    AMateria(std::string const & type);
    AMateria(const AMateria & other);
    virtual ~AMateria();
    AMateria & operator=(const AMateria & other);

    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use (ICharacter & target);

};

#endif