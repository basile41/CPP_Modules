#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define NB_OF_IDEAS 100

class Brain
{
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);
		
		// Destructor
		~Brain();
		
		// Operators
		Brain & operator=(const Brain &assign);

		// Accessors
		void				setIdea(size_t index, std::string ideas);
		const std::string			&getIdea(size_t index) const;
		const std::string	*getIdeas() const;
		
	private:
		std::string _ideas[NB_OF_IDEAS];

		
};

#endif