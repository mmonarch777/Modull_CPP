#include "Zombie.hpp"

int main(void )
{

    Zombie *horde = zombieHorde(5, "Zombie");

    delete []horde;
}