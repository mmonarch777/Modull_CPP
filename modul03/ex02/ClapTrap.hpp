#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
protected:
    std::string name;
    int         hit_point;
    int         energy;
    int         damage;

public:

    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap & clap);
    ClapTrap & operator=(const ClapTrap & clap);
    ~ClapTrap();
    std::string get_name(void );

    int get_damage(void );
    int get_energe(void );
    int get_hit_point(void );

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned  int amount);

};


#endif