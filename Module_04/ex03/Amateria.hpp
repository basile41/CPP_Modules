#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class Amateria;

class Amateria
{
	public:
		// Constructors
		Amateria(std::string type);
		Amateria(const Amateria &copy);
		
		// Destructor
		~Amateria();
		
		// Operators
		Amateria & operator=(const Amateria &assign);
		
		// Getters / Setters
		std::string const &	getType() const;
		
		// Methods
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

	protected:
		std::string _type;

	private:
		Amateria();
		
};

#endif