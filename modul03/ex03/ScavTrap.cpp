#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor is called." << std::endl;
    hit_point = HIT;
    energy = EN;
    damage = DAMG;
}
ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    hit_point = HIT;
    energy = EN;
    damage = DAMG;
    std::cout << "ScavTrap Constructor with parameters called.." << std::endl;
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

void ScavTrap::set_energy(unsigned int value)
{
    energy = value;
}
void ScavTrap::set_hitpoint(unsigned int value)
{
    hit_point = value;
}
void ScavTrap::set_damage(unsigned int value)
{
    damage = value;
}
int ScavTrap::get_energyyy(void )
{
    return this->energy;
}