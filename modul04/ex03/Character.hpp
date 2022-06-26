#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"

#define LEN 4

class Character : public ICharacter
{
protected:
    AMateria *materia[LEN];
    AMateria *need_del;
    std::string name;

public:

    Character()
    {
        name = "Vasiliy";
        need_del = NULL;
        for (int i = 0; i < LEN; i++)
            materia[i] = NULL;
        std::cout << "Character default constructor is called." << std::endl;
    }
    Character(std::string name)
    {
        this->name = name;
        need_del = NULL;
        for (int i = 0; i < LEN; i++)
            materia[i] = NULL;
        std::cout << "Character constructor with params is called." << std::endl;
    }
    Character(const Character & other)
    {
        name = other.name;
        for (int i = 0; i < LEN; i++)
        {
            if (materia[i] != NULL)
                delete materia[i];
            if (other.materia[i])
                materia[i] = other.materia[i]->clone();
            else
                materia[i] = NULL;
        }

        std::cout << "Character copy constructor is called." << std::endl;
    }
    ~Character()
    {
        for (int i = 0; i < LEN; i++)
        {
            if (materia[i] != NULL)
                delete materia[i];
        }
        std::cout << "Character destructor is called." << std::endl;
    }
    Character & operator=(const Character & other)
    {
        if (this != & other)
        {
            name = other.name;
            for (int i = 0; i < LEN; i++)
            {
                if (materia[i])
                    delete materia[i];
                materia[i] = other.materia[i]->clone();
            }
            std::cout << "Character assignment operator is called." << std::endl;
        }
        else
            std::cout << "Character self-assignment is here." << std::endl;
        return *this;
    }
    std::string const & getName() const
    {
        return name;
    }
    void equip(AMateria *m)
    {
        if (m == NULL)
        {
            std::cout << "error equip" << std::endl;
            return;
        }
        for (int i = 0; i < LEN; i++)
        {
            if (this->materia[i] == NULL)
            {
                materia[i] = m;
                std::cout << "--------Materia " << m->getType() << " equip." << std::endl;
                return;
            }
        }
        std::cout << "--------Don't have free slot for " << m->getType() << std::endl;
        delete m;
    }
    void unequip(int idx)
    {
        if (idx < 0 || idx > 3)
        {
            std::cout << "--------Don't valid index.." << std::endl;
            return;
        }
        if (materia[idx] == NULL)
        {
            std::cout << "--------Materia at index " << std::to_string(idx) << " does't exist." << std::endl;
            return;
        }
        need_del = materia[idx];
        materia[idx] = NULL;
        std::cout << "--------Materia at index " << std::to_string(idx) << " unequip." << std::endl;
    }

    void use(int idx, ICharacter & target)
    {
        if (need_del != NULL)
        {
            delete need_del;
            need_del = NULL;
        }
        if (idx > 3 || idx < 0)
        {
            std::cout << "--------Don't valid index.." << std::endl;
            return;
        }
        if (materia[idx] == NULL)
        {
            std::cout << "--------Materia at index " << std::to_string(idx) << " does't exist." << std::endl;
            return;
        }
        materia[idx]->use(target);
        delete materia[idx];
        materia[idx] = NULL;
    }
};

#endif