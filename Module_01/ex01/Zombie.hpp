/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:23:24 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/13 16:53:06 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie();
		Zombie( std::string name );
		~Zombie();
		void announce( void ) const;
		void setName( std::string name );
	private:
		std::string	_name;
};

Zombie*	zombieHorde( int N, std::string name );

#endif
