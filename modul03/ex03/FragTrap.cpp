#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor is called." << std::endl;
    hit_point = 100;
    energy = 100;
    damage = 30;
}
FragTrap::FragTrap(std::string name)
{
    this->name = name;
    hit_point = 100;
    energy = 100;
    damage = 30;
    std::cout << "FragTrap constructor with parameters is called." << std::endl;
}
FragTrap::FragTrap(const FragTrap & frag)
{
    std::cout << "FragTrap copy constructor is called." << std::endl;
    name = frag.name;
    hit_point = frag.hit_point;
    energy = frag.energy;
    damage = frag.damage;
}
FragTrap & FragTrap::operator=(const FragTrap & frag)
{
    if (this != &frag)
    {
        std::cout << "FragTrap copy assignmet operator is called." << std::endl;
        name = frag.name;
        hit_point = frag.hit_point;
        energy = frag.energy;
        damage = frag.damage;
    }
    else
        std::cout << "FragTrap self-assignmet is here." << std::endl;
    return *this;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor is called." << std::endl;
}
void FragTrap::highFiveGuys(void )
{
    if (hit_point > 0)
    {
        std::cout << "FragTrap give five." << std::endl;
    }
}
void FragTrap::attack(const std::string& target)
{
    if (hit_point > 0 && energy > 0)
    {
        std::cout << "FragTrap " << name << " attacks " << target << ", causing "
                  << damage << " points of damage!" << std::endl;
        energy--;
    }
}
