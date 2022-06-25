#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main(void )
{
    std::cout << "-------------------------------------------" << std::endl;
    ClapTrap first("First");
    ScavTrap yrick( "Yrick");
    ScavTrap rurik(yrick);
    FragTrap mikle("Mikle");

    std::cout << "-------------------------------------------" << std::endl;
    yrick.attack(mikle.get_name());
    mikle.beRepaired(10);
    std::cout << std::endl;
    mikle.attack(first.get_name());
    first.takeDamage(mikle.get_damage());
    first.attack(yrick.get_name());



    std::cout << "-------------------------------------------" << std::endl;
    return 0;
}