/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:53:54 by bregneau          #+#    #+#             */
/*   Updated: 2022/08/01 17:52:08 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<typename T>
class Array
{

	public:

		Array() : _size(0), _tab(NULL)
		{}
		Array( unsigned int n ) : _size(n), _tab(new T[n])
		{
			for (unsigned int i = 0; i < _size ; i++)
				_tab[i] = 0;
		}
		Array( Array<T> const & src ) : _tab(NULL)
		{
			*this = src;
		}

		~Array()
		{
			delete[] _tab;
		}

		Array<T> &		operator=( Array<T> const & rhs )
		{
			delete[] _tab;
			_size = rhs._size;
			_tab = new T[rhs._size];
			for (unsigned int i = 0; i < _size ; i++)
			{
				_tab[i] = rhs._tab[i];
			}
			return *this;
		}
		T &			operator[](unsigned int pos)
		{
			if (pos >= _size)
				throw std::exception();
			return _tab[pos];
		}
		T const &	operator[](unsigned int pos) const
		{
			if (pos >= _size)
				throw std::exception();
			return _tab[pos];
		}

		unsigned int	size() const
		{
			return _size;
		}

	private:
		unsigned int	_size;
		T *				_tab;

};

template<typename T>
std::ostream &	operator<<( std::ostream & o, Array<T> const & array )
{
	o << "{";
	for (unsigned int i = 0; i < array.size(); i++)
		o << array[i] << (i != array.size() - 1 ? ", ": "}");
	return o;
}

#endif /* *********************************************************** ARRAY_H */