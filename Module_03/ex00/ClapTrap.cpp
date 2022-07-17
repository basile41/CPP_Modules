#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap()
: _name("unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "\e[0;33mDefault Constructor called\e[0m" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called\e[0m" << std::endl;
}
ClapTrap::ClapTrap(std::string name)
: _name(name)
{
	std::cout << "\e[0;33mFields Constructor called\e[0m" << std::endl;
}
ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage)
: _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
	std::cout << "\e[0;33mFields Constructor called\e[0m" << std::endl;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "\e[0;31mDestructor called\e[0m" << std::endl;
}

// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	_name = assign.getName();
	_hitPoints = assign.getHitPoints();
	_energyPoints = assign.getEnergyPoints();
	_attackDamage = assign.getAttackDamage();
	return *this;
}


// Getters / Setters
std::string	ClapTrap::getName() const
{
	return _name;
}
int			ClapTrap::getHitPoints() const
{
	return _hitPoints;
}
int			ClapTrap::getEnergyPoints() const
{
	return _energyPoints;
}
int			ClapTrap::getAttackDamage() const
{
	return _attackDamage;
}


// Methods
void	ClapTrap::attack(const std::string& target)
{
	_energyPoints--;
	std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage !" << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	std::cout << _name << " loses " << amount << " HP !" << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	_energyPoints--;
	_hitPoints += amount;
	std::cout << _name << " is repaired and gain " << amount << " HP !" << std::endl;
}


// Stream operators
std::ostream &	operator<<(std::ostream &os, const ClapTrap &claptrap)
{
	os << claptrap.getName();
	return (os);
}
