#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>

# include "Amateria.hpp"

class Ice : public Amateria
{
	public:
		// Constructors
		Ice(const Ice &copy);
		Ice(std::string name);
		
		// Destructor
		~Ice();
		
		// Operators
		Ice & operator=(const Ice &assign);
		
		// Getters / Setters
		std::string const & getName() const;
		
	private:
		Ice();
		std::string _name;
		
};

#endif