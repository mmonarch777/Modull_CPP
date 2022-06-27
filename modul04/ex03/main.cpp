#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");

    AMateria* tmp;
//    Ice *ice = new Ice();
//    Cure *cure = new Cure();
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    ICharacter* bob = new Character("bob");
    me->equip(tmp);
    me->use(0, *me);
    me->use(1, *bob);
    me->unequip( 2);
    me->use(2, *bob);
    me->use(3,*bob);
    me->use(3,*bob);
    delete bob;
    delete me;
    delete src;
    while (1)
        ;
    return 0;
}