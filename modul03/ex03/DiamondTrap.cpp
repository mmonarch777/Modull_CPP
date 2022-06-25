#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    name = "DiamondTrap";
    ClapTrap::name = std::string(this->get_name()).append("_clap_name");
    hit_point = FragTrap::hit_point;
    energy = ScavTrap::energy;
    damage = FragTrap::damage;
    std::cout << "DiamondTrap default constructor is called." << std::endl;
}
DiamondTrap::DiamondTrap(std::string name): ClapTrap(std::string(name).append("_clap_name"))
{
    this->name = name;
//    ScavTrap::set_damage(DAMG);
//    ScavTrap::set_hitpoint(HIT);
    ScavTrap::set_energy(EN);

    this->hit_point = FragTrap::get_hit_point();
    this->energy = ScavTrap::get_energyyy();
    this->damage = FragTrap::get_damage();
    std::cout << this->get_NAME() << std::endl;
    std::cout << this->get_hit_point() << std::endl;
    std::cout << this->get_energe() << std::endl;
    std::cout << this->get_damage() << std::endl;
    std::cout << "DiamondTrap constructor with parameters is called." << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap & other)
{
    name = other.name;
    ClapTrap::name = other.ClapTrap::name;
    hit_point = other.hit_point;
    energy = other.energy;
    damage = other.damage;
//        *this = other;  !!!!!!!!!!!
    std::cout << "Diamond copy constructor is called." << std::endl;
}
DiamondTrap & DiamondTrap::operator=(const DiamondTrap & other)
{
    if (this != &other)
    {
        name = other.name;
        ClapTrap::name = other.ClapTrap::name;
        hit_point = other.hit_point;
        energy = other.energy;
        damage = other.damage;
        std::cout << "Diamond copy assignment operator is called." << std::endl;
    }
    else
        std::cout << "Diamond self-assignment is here." << std::endl;
    return *this;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond destructor is called." << std::endl;
}
void DiamondTrap::attack(const std::string & target)
{
    ScavTrap::attack(target);
}
void DiamondTrap::whoAm(void )
{
    if (hit_point > 0)
        std::cout << "I am DiamondTrap " << this->name << " and ClapTrap " << ClapTrap::get_name() << std::endl;
}
