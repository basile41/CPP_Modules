#include "Amateria.hpp"

// Constructors
Amateria::Amateria()
{
}

Amateria::Amateria(const Amateria &copy)
{
	*this = copy;
}

Amateria::Amateria(std::string type)
: _type(type)
{}


// Destructor
Amateria::~Amateria()
{
}


// Operators
Amateria & Amateria::operator=(const Amateria &assign)
{
	_type = assign._type;
	return *this;
}


// Getters / Setters
std::string const & Amateria::getType() const
{
	return _type;
}
