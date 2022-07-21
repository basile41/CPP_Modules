#include "DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap()
: _name("diamond")
{
	ClapTrap::_name = _name + "_clap_name";
	_energyPoints = 50;
	std::cout << "\e[0;33mDefault Constructor called (DiamondTrap)\e[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called (DiamondTrap)\e[0m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
: _name(name)
{
	ClapTrap::_name = _name + "_clap_name";
	_energyPoints = 50;
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


void DiamondTrap::whoAmI()
{
	std::cout	<< "name : " << _name << std::endl
				<< "clap name :" << ClapTrap::_name << std::endl;
}
