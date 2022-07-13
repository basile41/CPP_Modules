/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <bregneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:23:24 by bregneau          #+#    #+#             */
/*   Updated: 2022/07/13 14:33:38 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie( std::string name );
		~Zombie();
		void announce( void ) const;
	private:
		const std::string	_name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
