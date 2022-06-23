#include "Zombie.hpp"

int main(void )
{
    Zombie first("First");
    Zombie *heap = newZombie("Heap");

    first.announce();
    randomChump("Stack2");
    randomChump("Stack");
    delete heap;
    return 0;
}
