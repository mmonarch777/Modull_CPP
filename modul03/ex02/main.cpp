#include "ScavTrap.hpp"

int main(void )
{
    std::cout << "-------------------------------------------" << std::endl;
    ClapTrap mikle("Mikle");
    ScavTrap yrick( "Yrick");
    ScavTrap rurik;

    rurik = yrick;
    std::cout << "-------------------------------------------" << std::endl;

    yrick.attack(mikle.get_name());
    mikle.takeDamage(yrick.get_damage());
    std::cout << "-------------------------------------------" << std::endl;
    return 0;
}