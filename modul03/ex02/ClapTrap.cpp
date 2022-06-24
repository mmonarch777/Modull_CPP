#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): hit_point(10), energy(10), damage(0)
{
    std::cout << "ClapTrap Default constructor called." << std::endl;
}
ClapTrap::ClapTrap(std::string name): name(name), hit_point(10), energy(10), damage(0)
{
    std::cout << "ClapTrap Constructor with parameters called." << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap & clap)
{
    std::cout << "ClapTrap Copy constructor called." << std::endl;
    name = clap.name;
    hit_point = clap.hit_point;
    energy = clap.energy;
    damage = clap.damage;
}
ClapTrap & ClapTrap::operator=(const ClapTrap & clap)
{
    if (this != &clap)
    {
        std::cout << "ClapTrap Copy assignment operator called." << std::endl;
        name = clap.name;
        hit_point = clap.hit_point;
        energy = clap.energy;
        damage = clap.damage;
    }
    else
        std::cout << "ClapTrap self-assignment is here." << std::endl;
    return *this;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor is called." << std::endl;
}
std::string ClapTrap::get_name(void )
{
    return name;
}
int ClapTrap::get_damage(void )
{
    return damage;
}
int ClapTrap::get_energe(void )
{
    return energy;
}
int ClapTrap::get_hit_point(void )
{
    return hit_point;
}
void ClapTrap::attack(const std::string& target)
{
    if (hit_point > 0 && energy > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
                  << damage << " points of damage!" << std::endl;
        energy--;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << name << " get " << amount << " damage hitpoints." << std::endl;
    hit_point = hit_point - amount;
}
void ClapTrap::beRepaired(unsigned  int amount)
{
    if (hit_point > 0 && energy > 0)
    {
        std::cout<< name << " heals himself for " << amount << std::endl;
        hit_point = hit_point + amount;
        energy--;
    }
}