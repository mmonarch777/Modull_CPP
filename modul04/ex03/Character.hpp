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

    Character();
    Character(std::string name);
    Character(const Character & other);
    ~Character();

    Character & operator=(const Character & other);

    std::string const & getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter & target);

};

#endif