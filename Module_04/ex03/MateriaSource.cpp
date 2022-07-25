#include "MateriaSource.hpp"

// Constructors
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materias[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
		_materias[i] = 0;
	*this = copy;
}


// Destructor
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _materias[i];
}


// Operators
MateriaSource & MateriaSource::operator=(const MateriaSource &assign)
{
	for (int i = 0; i < 4; i++)
	{
		delete _materias[i];
		_materias[i] = NULL;
		if (assign._materias[i])
			_materias[i] = assign._materias[i]->clone();
	}
	return *this;
}


// Methods
void		MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == NULL)
		{
			_materias[i] = materia;
			break ;
		}
	}
}
AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] && _materias[i]->getType() == type)
			return _materias[i]->clone();
	}
	return 0;
}