#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main(void )
{
    std::cout << "-------------------------------------------" << std::endl;
    ScavTrap yrick( "Yrick");
    ScavTrap rurik("Yrick");
    FragTrap mikle("Mikle");

    std::cout << "-------------------------------------------" << std::endl;
    yrick.attack(mikle.get_name());
    mikle.beRepaired(10);


    std::cout << "-------------------------------------------" << std::endl;
    return 0;
}