#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main(void )
{
    std::cout << "-------------------------------------------" << std::endl;
    ClapTrap first("First");
    ScavTrap yrick( "Yrick");
    FragTrap mikle("Mikle");
    std::cout << "-------------------------------------------" << std::endl;
    DiamondTrap last("Last");
    DiamondTrap zzz(last);

    std::cout << "-------------------------------------------" << std::endl;
    last.whoAm();
    last.attack(first.get_name());
    last.highFiveGuys();
    last.guardGate();
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << last.get_NAME() << std::endl;
    std::cout << last.get_hit_point() << std::endl;
    std::cout << last.get_energe() << std::endl;
    std::cout << last.get_damage() << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    return 0;
}