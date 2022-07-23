#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << std::endl;
}


// Destructor
Brain::~Brain()
{
	std::cout << "\e[0;31mDestructor called of Brain\e[0m" << std::endl;
}


// Operators
Brain & Brain::operator=(const Brain &assign)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = assign._ideas[i];
	return *this;
}


// Accessors
void		Brain::setIdea(size_t index, std::string idea)
{
	_ideas[index % NB_OF_IDEAS] = idea;
}

const std::string	&Brain::getIdea(size_t index) const
{
	return (_ideas[index % NB_OF_IDEAS]);
} 

const std::string	*Brain::getIdeas() const
{
	return (_ideas);
}


