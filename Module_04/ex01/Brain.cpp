#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	_ideas[100] = "";
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
