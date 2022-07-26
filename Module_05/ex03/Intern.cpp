#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	// void (AForm::*C[3])( const std::string&)  = {&ShrubberyCreationForm::ShrubberyCreationForm};
}

Intern::Intern( const Intern & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

static AForm* newPresidentialPardonForm(std::string const & target)	{ return (new PresidentialPardonForm(target));	}
static AForm* newRobotomyRequestForm(std::string const & target)	{ return (new RobotomyRequestForm(target));	}
static AForm* newShrubberyCreationForm(std::string const & target) 	{ return (new ShrubberyCreationForm(target));	}

AForm *			Intern::makeForm(std::string name, std::string target) const
{
	const std::string	stab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm* (*newForm[3])(std::string const & ) = {	&newShrubberyCreationForm,
												&newRobotomyRequestForm,
												&newPresidentialPardonForm};

	AForm *form;
	for (int i = 0; i < 3; i++)
	{
		if (name == stab[i])
		{
			form = newForm[i](target);
			std::cout << "Intern creates " << *form;
			break ;
		}
	}
	return NULL;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */