#include "Ice.hpp"

// Constructors
Ice::Ice()
{}
Ice::Ice(const Ice &copy)
{
	*this = copy;
}
Ice::Ice(std::string name) : Amateria("ice") _name(name) 
{}


// Destructor
Ice::~Ice()
{
}


// Operators
Ice & Ice::operator=(const Ice &assign)
{
	Amateria::operator=(assign);
	_name = assign._name;
	return *this;
}


// Getters / Setters
std::string const & Ice::getName() const
{
	return _name;
}


// Methods
Amateria*		Ice::clone() const
{
	return (new Ice(*this));
}

virtual void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName(); << std::endl;
}
