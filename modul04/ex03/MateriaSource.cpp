#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < LEN; i++)
        stock[i] = NULL;
    std::cout << "MateriaSource default constructor is called." << std::endl;
}
MateriaSource::MateriaSource(MateriaSource & other)
{
    for (int i = 0; i < LEN; i++)
    {
        if(stock[i] != NULL)
            delete stock[i];
        stock[i] = other.stock[i];
    }
    std::cout << "MateriaSource copy constructor is called." << std::endl;
}
MateriaSource::~MateriaSource()
{
    for (int i = 0; i < LEN; ++i)
    {
        if (stock[i] != NULL)
            delete stock[i];
    }
    std::cout << "MateriaSource destructor is called." << std::endl;
}
MateriaSource const & MateriaSource::operator=(MateriaSource const & other)
{
    if (this != &other)
    {
        for (int i = 0; i < LEN; i++)
        {
            if (other.stock[i] != NULL)
                delete other.stock[i];
            stock[i] = other.stock[i];
        }
        std::cout << "MateriaSource assignment operator is called." << std::endl;
    }
    else
        std::cout << "MateriaSource self-assignment is here." << std::endl;
    return *this;
}
void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < LEN; i++)
    {
        if(stock[i] == NULL)
        {
            stock[i] = m;
            std::cout << "--------Materia " << m->getType() << " is learn!" << std::endl;
            return;
        }
    }
    std::cout << "--------Don't have slot for learn.";
}
AMateria * MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < LEN; i++)
    {
        if (type == stock[i]->getType())
        {
            std::cout << "--------Materia have been created!" << std::endl;
            return stock[i]->clone();
        }
    }
    std::cout << "--------Materia don't found!" << std::endl;
    return NULL;
}