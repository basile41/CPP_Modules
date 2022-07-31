/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:53:54 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/31 18:00:08 by bregneau         ###   ########.fr       */
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

		Array();
		Array( unsigned int n );
		Array( Array const & src )
		{
			*this
		}
		~Array();

		Array &		operator=( Array const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Array const & i );

#endif /* *********************************************************** ARRAY_H */