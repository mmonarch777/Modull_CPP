#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <iostream>

# define LEN 4

class MateriaSource : public IMateriaSource
{
private:
    AMateria *stock[LEN];

public:

    MateriaSource();
    MateriaSource(MateriaSource & other);
    ~MateriaSource();
    MateriaSource const & operator=(MateriaSource const & other);

    void learnMateria(AMateria* m);
    AMateria * createMateria(std::string const & type);

};

#endif