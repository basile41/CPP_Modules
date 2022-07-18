#include "DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap()
: ScavTrap(), FragTrap()
{
	_name = "diamondtrap";
	_hitPoints = FragTrap::_hitPoints;
	std::cout << "\e[0;33mDefault Constructor called (DiamondTrap)\e[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called (DiamondTrap)\e[0m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	_name = name;
	std::cout << "\e[0;33mFields Constructor called (DiamondTrap)\e[0m" << std::endl;
}


// Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "\e[0;31mDestructor called (DiamondTrap)\e[0m" << std::endl;
}


// Operators
DiamondTrap & DiamondTrap::operator=(const DiamondTrap &assign)
{
	_name = assign._name;
	_hitPoints = assign._hitPoints;
	_energyPoints = assign._energyPoints;
	_attackDamage = assign._attackDamage;
	return *this;
}


// Getters / Setters
