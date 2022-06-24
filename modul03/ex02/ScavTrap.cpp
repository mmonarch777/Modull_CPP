#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor is called." << std::endl;
    hit_point = 100;
    energy = 50;
    damage = 20;
}
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap Constructor with parameters called.." << std::endl;
    hit_point = 100;
    energy = 50;
    damage = 20;
}
ScavTrap::ScavTrap(const ScavTrap & scav)
{
    std::cout << "ScavTrap copy constructor is called." << std::endl;
    name = scav.name;
    hit_point = scav.hit_point;
    energy = scav.energy;
    damage = scav.damage;
}
ScavTrap & ScavTrap::operator=(const ScavTrap & scav)
{
    if (this != &scav)
    {
        std::cout << "ScavTrap copy assignment operator called." << std::endl;
        name = scav.name;
        hit_point = scav.hit_point;
        energy = scav.energy;
        damage = scav.damage;
    }
    else
        std::cout << "ScavTrap self-assignment is here." << std::endl;
    return *this;
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor is called." << std::endl;
}
void ScavTrap::attack(const std::string& target)
{
    if (hit_point > 0 && energy > 0)
    {
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing "
                  << damage << " points of damage!" << std::endl;
        energy--;
    }
}
void ScavTrap::guardGate()
{
    if (hit_point > 0)
        std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}