#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
# define HIT    100
# define EN     50
# define DAMG   20

class ScavTrap : public virtual ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap & scav);
    ScavTrap & operator=(const ScavTrap & scav);
    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate();

    void set_energy(unsigned int value);
    void set_hitpoint(unsigned int value);
    void set_damage(unsigned int value);

    int get_energyyy(void );
};
#endif
