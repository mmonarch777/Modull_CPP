#include "ClapTrap.hpp"

int main(void )
{
    std::cout << "-------------------------------------------" << std::endl;
    ClapTrap mikle("Mikle");
    ClapTrap yrick("Yrick");
    ClapTrap ejik("EJ");

    ejik = mikle;

    mikle.attack(ejik.get_name());
    ejik.takeDamage(5);
    ejik.beRepaired(-429496729);
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << ejik.get_hit_point() << std::endl;
    std::cout << ejik.get_energe() << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    return 0;
}